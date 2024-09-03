#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	int m, n, max;
	max = 0;
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			int num;
			cin >> num;
			if (max <= num) {
				max = num;
				m = i+1;
				n = j+1;
			}
		}
	}
	cout << max << endl << m << " " << n;
}