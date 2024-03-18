#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

vector<bool> visited;
int V, group1, group2, cnt;
void DFS(vector<vector<int>> graph, int start) {
    cnt++;
    visited[start] = true;
    for (int i = 0; i < V; i++) {
        if (graph[start][i] == 1 && !visited[i]) {
            DFS(graph, i);
        }
    }
}
int solution(int n, vector<vector<int>> wires) {
    int answer = -1;
    vector<int> cntVec;
    for (int i = 0;i < n;i++) {
        visited.push_back(false);
    }
    V = n;
    vector<vector<int>> adj;
    adj.resize(n);
    for (int i = 0;i < n;i++) {
        adj[i].resize(n);
    }
    vector<vector<int>> temp = wires;
    for (int k = 0;k < n;k++) {
        wires = temp;
        wires.erase(wires.begin() + k);
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                adj[i][j] = 0;
            }
        }
        for (int i = 0;i < wires.size();i++) {
            adj[wires[i][0] - 1][wires[i][1] - 1] = 1;
            adj[wires[i][1] - 1][wires[i][0] - 1] = 1;
        }
        group1 = 0;
        group2 = 0;
        for (int i = 0;i<n;i++) {
            visited[i] = false;
        }
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                cnt = 0;
                DFS(adj, i);
                if (group1 == 0) {
                    group1 = cnt;
                }
                else {
                    group2 = cnt;
                }
            }
        }
        cntVec.push_back(abs(group1 - group2));
    }
    answer = *min_element(cntVec.begin(), cntVec.end());
    return answer;
}