#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> graph;
vector<int> result;
void dfs(int v) {
    for (int i = 0; i<graph[v].size();i++) {
        if (result[graph[v][i]] == -1) {
            result[graph[v][i]] = v;
            dfs(graph[v][i]);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int n1,n2;
    queue<pair<int,int>> input;
    result.resize(n+1, -1);
    graph.resize(n+1);
    result[1] = 1;

    for (int i = 0 ; i<n-1 ; i++) {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    dfs(1);
    for (int i = 2;i<=n;i++) {
        cout << result[i] << "\n";
    }
}