#include <bits/stdc++.h>
using namespace std;

int main() {
    // adjcency matrix
    vector<vector<int>> adjMat = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 1, 0}
    };

    // adjacency list
    vector<vector<int>> adjList(adjMat.size());

    for(int i = 0; i < adjMat.size(); i++) {
        for(int j = 0; j < adjMat[0].size(); j++) {
            if(adjMat[i][j] == 1) {
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }

    // bfs traversal using adjList
    vector<int> ans;
    vector<int> visited(adjList.size(), 0);
    queue<int> q;
    q.push(0);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        if(!visited[node]) {
            visited[node] = 1;
            ans.push_back(node);

            for(auto it : adjList[node]) {
                if(!visited[it]) {
                    q.push(it);
                }
            }
        }
    }

    // print
    for(auto ele : ans) {
        cout << ele << " ";
    }

    return 0;
}
