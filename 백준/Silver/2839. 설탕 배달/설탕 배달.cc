#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) { 
	int n;
	cin >> n;
	int cnt = 1;
	int num = 0;
	int n3=0, n5=0;
	vector <int> result;
	for (int i = 0;i < 10000;i++) {
		for (int j = 0;j < 10000;j++) {
			num = 3 * j + 5 * i;
			cnt = j + i;
			if (num == n) {
				result.push_back(cnt);
				break;
			}
			if (num > n) {
				break;
			}
		}
		if (i * 5 > n) {
			break;
		}
	}
	int min=-1;
	if (result.size() != 0) {
		min = *min_element(result.begin(), result.end());
	}
	
	cout << min;
	
}
