#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int a, b;
	cin >> a;
	cin >> b;
	int cnt = 0;
	int result=0;
	for (int i = 1;i <= a;i++) {
		if (a % i == 0) {
			cnt++;
			if (cnt == b) {
				result = i;
				break;
			}
		}
	}
	cout << result;
}