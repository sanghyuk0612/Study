#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> graph;
vector<int> result;
vector<bool> visit;
int cnt;
void dfs(int v) {
	cnt++;
	visit[v] = true;
	for (int i = 0;i<graph[v].size();i++) {
		if (!visit[graph[v][i]]) {
			dfs(graph[v][i]);
		}
	}
}
int main(void) {
	int n, m;
	cin >> n >> m;
	graph = vector<vector<int>>(n+1);
	result = vector<int>(n+1);
	int maxV = 0;
	int maxCnt = 0;
	for (int i =0;i<m;i++) {
		int tmp1 ,tmp2;
		cin >> tmp1 >> tmp2;
		graph[tmp2].push_back(tmp1);
	}
	for (int i =1;i<=n;i++) {
		visit = vector<bool>(n+1, false);
		cnt = 0;
		dfs(i);
		if (cnt > maxV) {
			maxV = cnt;
		}
		result[i] = cnt;
	}
	for (int i=1;i<=n;i++) {
		if (result[i] == maxV) {
			cout << i << " ";
		}
	}
}