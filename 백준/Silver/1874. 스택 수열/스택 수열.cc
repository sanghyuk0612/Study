#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<int> vec(n);
	stack<int> st;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	int key = 0;
	int i = 1;
	int k = 0;
	vector<char> result;
	while (key != n && i <= n && k < n) {
		while (vec[k] != i && i <= n) {
			st.push(i);
			result.push_back('+');
			key++;
			i++;
		}
		st.push(i);
		result.push_back('+');
		key++;
		i++;
		while (st.size() != 0 && vec[k] == st.top() && i <= n && k < n) {
			st.pop();
			result.push_back('-');
			k++;
		}
	}
	while (st.size() != 0) {
		if (st.top() != vec[k]) {
			cout << "NO" << '\n';
			return 0;
		}
		result.push_back('-');
		st.pop();
		k++;
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
}
