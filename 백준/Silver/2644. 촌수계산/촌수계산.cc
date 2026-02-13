#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> graph(n+1);
	int start, end;
	cin >> start >> end;
	int lineNum;
	cin >> lineNum;
	int tmp1, tmp2;
	for (int i = 0 ;i<lineNum;i++) {
		cin >> tmp1 >> tmp2;
		graph[tmp1].push_back(tmp2);
		graph[tmp2].push_back(tmp1);
	}
	queue<int> q;
	q.push(start);
	int tmp;
	vector<int> visit(n+1, -1);
	visit[start] = 0;

	while(!q.empty()) {
		tmp = q.front();
		q.pop();
		for (int i = 0; i< graph[tmp].size();i++) {
			if (visit[graph[tmp][i]] == -1) {
				visit[graph[tmp][i]] = visit[tmp]+1;
				q.push(graph[tmp][i]);
			}
		}
	}
	cout << visit[end];
}