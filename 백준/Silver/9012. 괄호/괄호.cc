#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int n;

	cin >> n;
	vector<string> s(n);
	for (int i = 0;i < n;i++) {
		cin >> s[i];
	}
	for (int i = 0;i < n;i++) {
		stack<char> st;
		for (int j = 0;j < s[i].length();j++) {
			if (s[i][j] == '(') {
				st.push('(');
			}
			else {
				if (st.empty()||st.top()!='(') {
					cout << "NO" << endl;
					break;
				}
				else {
					st.pop();
				}
			}
			if (j == s[i].length() - 1) {
				if (st.empty())
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		}
	}

}
