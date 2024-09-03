#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 0;j < n-i;j++) {
			cout << " ";
		}
		int re = 2*i - 1;
		for (int k = 0;k < re;k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n-1;i >= 0;i--) {
		for (int j = 0;j < n - i;j++) {
			cout << " ";
		}
		int re = 2 * i - 1;
		for (int k = 0;k < re;k++) {
			cout << "*";
		}
		cout << endl;
	}
}