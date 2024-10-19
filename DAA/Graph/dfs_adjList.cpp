#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &ans, vector<int> &visited, int node, vector<vector<int>> adjList) {
    visited[node] = 1;
    ans.push_back(node);

    for(auto it : adjList[node]) {
        if(!visited[it]) {
            dfs(ans, visited, it, adjList);
        }
    }
}

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
    

    // dfs traversal using adjList
    int v = adjList.size();
    vector<int> ans;
    vector<int> visited(v, 0);
    
    for(int i = 0; i < v; i++) {
        if(!visited[i]) {
            dfs(ans, visited, i, adjList);
        }
    }

    // print
    for(auto ele : ans) {
        cout << ele << " ";
    }
    
    return 0;
}
