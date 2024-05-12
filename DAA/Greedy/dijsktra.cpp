#include <iostream>
#include <vector>
#include <queue>
#include <climits> // for INT_MAX
using namespace std;

typedef pair<int, int> Int;

void BFS(vector<vector<Int>>& adj, priority_queue<Int, vector<Int>, greater<Int>>& pq, vector<int>& dist) {
    while (!pq.empty()) {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto i : adj[node]) {
            if (dist[i.first] > dis + i.second) {
                dist[i.first] = dis + i.second;
                pq.push(make_pair(dis + i.second, i.first));
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of Nodes and Edges: ";
    cin >> n >> m;
    vector<vector<Int>> adj(n);
    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> dist(n, INT_MAX); // Initialize all distances to INT_MAX
    dist[0] = 0; // Set distance to source node to 0

    priority_queue<Int, vector<Int>, greater<Int>> pq;
    pq.push(make_pair(0, 0)); // Push source node with distance 0

    // Print initial distances
    cout << "Initial distances: ";
    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
    cout << endl;

    // Call BFS function
    BFS(adj, pq, dist);

    // Print final distances
    cout << "Final distances: ";
    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
    cout << endl;

    return 0;
}
