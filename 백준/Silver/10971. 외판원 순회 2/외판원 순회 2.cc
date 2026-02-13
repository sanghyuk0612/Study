#include <iostream>
#include <vector>

using namespace std;
int weight = 0;
int minWeight = 9999999;
vector<vector<int>> mat;
int start;
vector<bool> visit;
void back(int depth,int value, int v) {
	visit[v] = true;
	if (depth == visit.size()-1) {
		if (mat[v][start]) {
			value += mat[v][start];
			if (minWeight > value) {
				minWeight = value;
			}
		}
	}
	else {
		for (int i = 0;i < mat.size();i++) {
			if (!visit[i] && mat[v][i] > 0) {
				back(depth+1, value+mat[v][i], i);
			}
		}
	}
	visit[v] = false;
}
int main(void) {
	int n, k;
	cin >> n;
	mat.resize(n,vector<int>(n));
	for (int i = 0;i<n;i++) {
		for (int j = 0; j<n;j++) {
			cin >> mat[i][j];
		}
	}
	visit.resize(n,false);
	for (int i = 0; i<n; i++) {
		start = i;
		back(0, 0, i);
	}
	cout << minWeight;
}