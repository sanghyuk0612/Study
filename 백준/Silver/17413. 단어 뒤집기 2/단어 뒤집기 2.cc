#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(void) {
	string s;
	vector<string> ss;
	int t = 0;
	getline(cin, s, '\n');
	t = 0;
	for (int j = 0;j < s.length();j++) {
		if (s[j] == '<') {
			reverse(s.begin() + t, s.begin() + j);
			t = j + 1;
			while (j + 1 != s.length()&&(s[j] != '>' || s[j + 1] == '<')) {
				j++;
			}
			j++;
			t = j;
		}
		if (s[j] == ' ') {
			reverse(s.begin() + t, s.begin() + j);
			t = j + 1;
		}
		if (j == s.length() - 1) {
			reverse(s.begin() + t, s.end());
		}
	}
	cout << s;
}

