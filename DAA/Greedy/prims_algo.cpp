#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
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

class Prims {
public:
    vector<pair<int, pair<int, int>>> mst;
    int sum = 0;

    void primsAlgo(int V, Graph& G) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<int> visited(V);
        pq.push({0, {-1, 0}});

        while(!pq.empty()) {
            auto top_ele = pq.top();
            pq.pop();

            if(!visited[top_ele.second.second]) {
                sum += top_ele.first;
                visited[top_ele.second.second] = 1;
                if(top_ele.second.first != -1) mst.push_back({top_ele.first, {top_ele.second.first, top_ele.second.second}});

                for(auto i : G.adj[top_ele.second.second]) {
                    pq.push({i.second, {top_ele.second.second, i.first}});
                }
            }
        }
    }

    void printMST() {
        cout << endl << "Total weight: " << sum << endl << endl;
        for(auto i : mst) {
            cout << "(" << i.first << ", " << i.second.first << ", " << i.second.second << ")" << endl;
        }
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
    Prims P;
    P.primsAlgo(n, G);
    P.printMST();
    return 0;
}
