#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	int num;
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		cin >> num;
		if (num == 2) {
			cnt++;
			continue;
		}
		for (int j = 2;j <= num/2+1;j++) {
			if (num % j == 0) {
				break;
			}
			if (j == num/2+1)
				cnt++;
		}
	}
	cout << cnt;

}