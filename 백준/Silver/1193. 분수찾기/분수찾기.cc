#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(void) { 
	int n;
	cin >> n; //1 2 4 7 11 16 ...
	int cnt = 1;
	int num = 1;
	while (n >= num) {
		num += cnt++;
	}
	num = num-cnt+1;
	int m, s;
	int rever=0;

	s = 1;
	m = cnt-1;
	if (m % 2 != 0) {
		rever = 1;
	}
	while (num != n) {
		s++;
		m--;
		num++;
	}
	if (rever) {
		cout << m << "/" << s;
	}
	else
		cout << s << "/" << m;
	
}