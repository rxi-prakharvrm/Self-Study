#include <bits/stdc++.h>
using namespace std;
#define V 9

class Prims {
    unordered_map<int, vector<pair<int, int>>> adj;
    public:
    void buildAdjList(int graph[V][V]);
    void printAdjList();
    void primsAlgo();
};

void Prims::buildAdjList(int graph[V][V]) {
    for(int i = 0; i < V; i++) {
        for(int j = i+1; j < V; j++) {
            if(graph[i][j] == 0) continue;
            else {
                adj[i].push_back({j, graph[i][j]});
                adj[j].push_back({i, graph[i][j]});
            }
        }
    }
}

void Prims::printAdjList() {
    vector<int> visited(V, 0);
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {0, -1}});

    while(!q.empty()) {
        auto front_ele = q.front();
        q.pop();

        int node = front_ele.second.first;
        int parent = front_ele.second.second;
        int weight = front_ele.first;

        if(!visited[node]) {
            visited[node] = 1;

            cout << node << " --> ";
            for(auto i : adj[node]) {
                q.push({i.second, {i.first, node}});
                cout << "[" << i.first << "," << i.second << "]";
            }
            cout << endl;
        }
    }
}

void Prims::primsAlgo() {
    vector<int> visited(V, 0);
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    pq.push({0, {0, -1}});

    while(!pq.empty()) {
        auto front_ele = pq.top();
        pq.pop();

        int node = front_ele.second.first;
        int parent = front_ele.second.second;
        int weight = front_ele.first;

        if(!visited[node]) {
            visited[node] = 1;

            for(auto i : adj[node]) {
                pq.push({i.second, {i.first, node}});
            }
            
            if(parent != -1) cout << "[" << parent << "," << node << "] ";
        }
    }

}

int main() {
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    Prims P;
    P.buildAdjList(graph);
    // P.printAdjList();
    P.primsAlgo();
    return 0;
}