#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(void) { //c,d,l,n,s,n
	string s;
	int n;
	
	cin >> s;
	cin >> n;
	int result=0;
	reverse(s.begin(),s.end());
	for (int i = 0;i <s.length();i++) {
		char c = s[i];
		int num;
		if ('0' <= c && c <= '9') {
			num = c - '0';
		}
		else {
			num = 10 + c - 'A';
		}
		int re=0;
		re += pow(n, i)*num;
		result += re;

	}
	cout << result;

}