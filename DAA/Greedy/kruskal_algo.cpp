#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

class Graph {
public:
    unordered_map<int, vector<pair<int, int>>> adj;

    void insert(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << " --> ";
            for(auto j : i.second) {
                cout << "(" << j.first << ", " << j.second << ") ";
            }
            cout << endl;
        }
    }
};

class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);

        for(int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUltimateParent(int node) {
        if(node == parent[node])
            return node;
        return parent[node] = findUltimateParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
        else if(rank[ulp_v] < rank[ulp_u]) parent[ulp_v] = ulp_u;
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Kruskal {
public:
    int spanningTree(int V, unordered_map<int, vector<pair<int, int>>>& adj) {
        vector<pair<int, pair<int, int>>> edges;
        for(auto i : adj) {
            int node = i.first;
            for(auto it : i.second) {
                int adjNode = it.first;
                int wt = it.second;

                edges.push_back({wt, {node, adjNode}});
            }
        }

        DisjointSet ds(V);

        sort(edges.begin(), edges.end());
        int mstWt = 0;
        for(auto it : edges) {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findUltimateParent(u) != ds.findUltimateParent(v)) {
                mstWt += wt;
                ds.unionBySize(u, v);
            }
        }

        return mstWt;
    }
};

int main() {
    Graph G;
    G.insert(0, 1, 4);
    G.insert(0, 7, 8);
    G.insert(1, 2, 8);
    G.insert(1, 7, 11);
    G.insert(2, 3, 7);
    G.insert(2, 8, 2);
    G.insert(2, 5, 4);
    G.insert(3, 4, 9);
    G.insert(3, 5, 14);
    G.insert(4, 5, 10);
    G.insert(5, 6, 2);
    G.insert(6, 7, 1);
    G.insert(6, 8, 6);
    G.insert(7, 8, 7);

    G.print();

    int n = 9;
    Kruskal K;
    int mstWeight = K.spanningTree(n, G.adj);
    cout << "MST Weight: " << mstWeight << endl;
    return 0;
}
