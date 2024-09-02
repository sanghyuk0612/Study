#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	string result="";
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		int len = s.length()-1;
		result += s[0];
		result += s[len];
	}
	for (int i = 0; i < result.length();) {
		cout << result[i] << result[i + 1] << endl;
		i += 2;
	}
}