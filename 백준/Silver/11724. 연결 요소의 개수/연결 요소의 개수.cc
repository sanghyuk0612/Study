
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<bool> selected;
vector<vector<int>> graph;
void dfs(int v);
int main(void) {
    int n, v;
    cin >> n >> v;
    graph = vector<vector<int>>(n+1);
    selected = vector<bool>(n+1,false);
    int tmp1, tmp2;
    int cnt = 0;
    for (int i = 0 ;i < v;i++) {
        cin >> tmp1 >> tmp2;
        graph[tmp1].push_back(tmp2);
        graph[tmp2].push_back(tmp1);
    }
    for (int i = 1 ; i <=n;i++) {
        if (!selected[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
}
void dfs(int v) {
    selected[v] = true;
    for (int i = 0; i<graph[v].size();i++) {
        int tmp = graph[v][i];
        if (!selected[tmp]) {
            dfs(tmp);
        }
    }
}