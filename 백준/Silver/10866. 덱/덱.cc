#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	string s;
	int tmp;
	vector<int> result;
	deque<int> de;

	for (int i = 0;i < n;i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> tmp;
			de.push_front(tmp);
		}
		else if (s == "push_back") {
			cin >> tmp;
			de.push_back(tmp);
		}
		else if (s == "pop_front") {
			if (de.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(de.front());
				de.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (de.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(de.back());
				de.pop_back();
			}
		}
		else if (s == "size") {
			result.push_back(de.size());
		}
		else if (s == "empty") {
			result.push_back(de.empty());
		}
		else if (s == "front") {
			if (de.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(de.front());
			}
		}
		else if (s == "back") {
			if (de.empty()) {
				result.push_back(-1);
			}
			else {
				result.push_back(de.back());
			}
		}
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << '\n';
	}
}
