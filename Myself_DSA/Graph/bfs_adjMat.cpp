#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> adjMat = {{0, 1, 0, 1},
                                  {1, 0, 1, 1},
                                  {0, 1, 0, 0},
                                  {1, 1, 0, 0}};

    // bfs traversal
    vector<int> ans;
    vector<int> visited(adjMat.size(), 0);
    queue<int> q;
    q.push(0);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        if(!visited[node]) {
            visited[node] = 1;
            ans.push_back(node);
            for(int i = 0; i < adjMat[node].size(); i++) {
                if(adjMat[node][i] == 1 && !visited[i]) {
                    q.push(i);
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
