#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int weight = 0;
vector<int> input;
vector<bool> visit;
vector<int> result;
void back(int depth, int v) {;
	visit[v] = true;
	result[depth] = input[v];
	if (depth == result.size()-1) {
		for (int i = 0; i < result.size();i++) {
			cout << result[i] << " ";
		}
		cout << "\n";
		visit[v] = false;
		return;
	}
	for (int i = 0; i < visit.size();i++) {
		if (!visit[i] && input[i]>input[v]) {
			back(depth+1,i);
		}
	}
	visit[v] = false;
}
int main(void) {
	int n;
	cin >> n;
	while (n !=0) {
		input.resize(n,0);
		for (int i = 0; i <input.size();i++) {
			cin >> input[i];
		}
		sort(input.begin(),input.end());
		visit.resize(n,false);
		result.resize(6,-1);
		for (int i = 0; i<n;i++) {
			back(0, i);
		}
		cin >> n;
		cout << "\n";
	}
}