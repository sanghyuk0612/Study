#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	vector<int> result;
	int key = 1;
	
	if (n == 1) {
		return 0;
	}
	while (key) {
		for (int i = 2;i <= n / 2 + 1;i++) {
			if (n == 2) {
				result.push_back(2);
				n /= 2;
				key = 0;
				break;
			}
			if (n % i == 0) {
				result.push_back(i);
				n /= i;
				break;
			}
			if (i == n / 2+1 ) {
				result.push_back(n);
				key = 0;
			}
		}
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << endl;
	}
}