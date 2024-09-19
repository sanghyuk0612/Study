#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<int> result;
	queue<int> que;
	string tmp;
	for (int i = 0;i < n;i++) {
		cin >> tmp;
		if (tmp == "push") {
			cin >> tmp;
			que.push(stoi(tmp));

		}
		else if (tmp == "pop") {
			if (que.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(que.front());
				que.pop();
			}
			
		}
		else if (tmp == "size") {
			result.push_back(que.size());
		}
		else if (tmp == "empty") {
			result.push_back(que.empty());
		}
		else if (tmp == "front") {
			if (que.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(que.front());
			}
		}
		else if (tmp == "back") {
			if (que.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(que.back());
			}
		}
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << '\n';
	}
}
