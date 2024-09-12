#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	string s;
	vector<string> ss;
	int t=0;
	getline(cin, s, '\n');
	for (int i = 0;i < n;i++) {
		getline(cin, s,'\n');
		t = 0;
		for (int j = 0;j < s.length();j++) {
			if (s[j] == ' ') {
				reverse(s.begin()+t, s.begin() + j);
				t = j+1;
			}
			if (j == s.length() - 1) {
				reverse(s.begin() + t, s.end());
			}
			
		}
		ss.push_back(s);
	}
	for (int i = 0;i < n;i++) {
		cout << ss[i] << endl;
	}

}
