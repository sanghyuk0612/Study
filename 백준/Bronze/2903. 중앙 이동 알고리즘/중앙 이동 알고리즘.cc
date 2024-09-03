#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	int cnt = 2;
	for (int i = 0;i < n;i++) {
		cnt = cnt * 2 - 1;
	}
	cout << cnt*cnt;
}