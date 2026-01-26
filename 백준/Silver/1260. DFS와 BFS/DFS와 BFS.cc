#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(vector<vector<int>> adj, int v);
void bfs(vector<vector<int>> adj, int v);
vector<bool> visited;
int main(void) {
    int n, m, v;
    cin >> n >> m >> v;
    vector<vector<int>> adj(n+1);
    visited.push_back(true);
    for (int i = 1; i<=n; i++) {
        visited.push_back(false);
    }
    int tmp1, tmp2;
    for (int i = 0; i < m; i ++) {
        cin >> tmp1 >> tmp2;
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    for (int i = 1; i < adj.size(); i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(adj, v);
    cout << "\n";
    for (int i = 1; i<=n; i++) {
        visited[i] = false;
    }
    bfs(adj, v);
}

void dfs(vector<vector<int>> adj, int v) {
    if (!visited[v]) {
        cout << v << " ";
        visited[v] = true;
    }
    for (int i = 0; i < adj[v].size(); i++) {
        if (!visited[adj[v][i]]) {
            dfs(adj, adj[v][i]);
        }
    }
}

void bfs(vector<vector<int>> adj, int v) {
    queue<int> q;
    cout << v << " ";
    visited[v] = true;
    q.push(v);
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < adj[cur].size(); i++) {
            if (!visited[adj[cur][i]]) {
                q.push(adj[cur][i]);
                cout << adj[cur][i] << " ";
                visited[adj[cur][i]] = true;
            }
        }
    }
}