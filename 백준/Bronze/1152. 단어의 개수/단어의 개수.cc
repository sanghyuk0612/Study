#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	string s;
	getline(cin, s);
	
	int cnt = 0;
	for (int i = 0; i < s.length();i++) {
		if (s[i] == ' '&& i!=0 && i != s.length() - 1) {
			cnt++;
		}
	}
	if (s[0] == ' ' && s.length() <= 1) {
		cout << "0";
		return 0;
	}
	cnt++;
	cout << cnt;
}