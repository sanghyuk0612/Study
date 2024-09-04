#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int a,b;
	cin >> a;
	cin >> b;

	int num;
	int cnt = 0;
	vector<int> vec;
	int min = 999999;
	for (int i = a;i <= b;i++) {
		num = i;
		if (num == 2) {
			if (min > num) {
				min = num;
			}
			vec.push_back(num);
			continue;
		}
		for (int j = 2;j <= num/2+1;j++) {
			if (num % j == 0) {
				break;
			}
			if (j == num / 2 + 1) {
				if (min > num) {
					min = num;
				}
				vec.push_back(num);
			}
		}
	}
	int sum = 0;
	if (vec.size() == 0) {
		cout << "-1";
		return 0;
	}
	for (int i = 0;i < vec.size();i++) {
		sum += vec[i];
	}
	cout << sum << endl << min;

}