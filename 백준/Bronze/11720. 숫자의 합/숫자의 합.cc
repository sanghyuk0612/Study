#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int n;
	string s;
	cin >> n;
	cin >> s;
	int result=0;
	for (int i = 0; i < n;i++) {
		result += (int)s[i] - '0';
	}
	cout << result;
}