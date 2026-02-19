#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visit;
int result = 0;
void dfs(int depth ,int v) {
    visit[v] = true;
    if (result == 1) {
        return;
    }
    if (depth == 4) {
        result = 1;
        return;
    }
    for (int i = 0 ;i < graph[v].size();i++) {
        if (!visit[graph[v][i]]) {
            dfs(depth+1,graph[v][i]);
        }
    }
    visit[v] = false;
}

int main(void) {
    int n, v;
    cin >> v >> n;
    graph.resize(v);
    visit.resize(v);
    int tmp1, tmp2;
    for (int i = 0 ; i< n;i++) {
        cin >> tmp1 >> tmp2;
        graph[tmp1].push_back(tmp2);
        graph[tmp2].push_back(tmp1);
    }
    for (int i = 0; i < v;i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    for (int i = 0; i < v;i++) {
        dfs(0,i);
    }
    cout << result;
}