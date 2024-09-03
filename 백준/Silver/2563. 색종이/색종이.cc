#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	int n;
	cin >> n;
	int paper[100][100] = { 0 };
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		int num1, num2;
		cin >> num1;
		cin >> num2;
		for (int j = 0;j < 10;j++) {
			for (int k = 0;k < 10;k++) {
				paper[num1+j][num2+k] = 1;
			}
		}
	}
	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++) {
			if (paper[i][j] == 1)
				cnt++;
		}
	}
	cout << cnt;
}