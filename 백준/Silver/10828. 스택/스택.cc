#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int n;
	stack<int> st;
	vector<int> result;
	string tmp;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> tmp;
		if (tmp == "push") {
			cin >> tmp;
			st.push(stoi(tmp));
		}
		else if (tmp == "top") {
			if (!st.empty()) {
				result.push_back(st.top());
			}
			else
				result.push_back(-1);
			
		}
		else if (tmp == "pop") {
			if (!st.empty()) {
				result.push_back(st.top());
				st.pop();
			}
			else
				result.push_back(-1);
			
		}
		else if (tmp == "empty") {
			int e = st.empty();
			result.push_back(e);
		}
		else if (tmp == "size") {
			int size = st.size();
			result.push_back(size);
		}
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << endl;
	}
}
