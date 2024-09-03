#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	vector<int> arr(n);
	int tmp;
	for (int i = 0;i < n;i++) {
		cin >> tmp;
		arr[i] = tmp;
	}
	//25, 10, 5, 1
	for (int i = 0;i < n;i++) {
		int mon = arr[i];
		int don1, don2, don3, don4;
		don1 = mon / 25;
		mon %= 25;
		don2 = mon / 10;
		mon %= 10;
		don3 = mon / 5;
		mon %= 5;
		don4 = mon;
		cout << don1 << " " << don2 << " " << don3 << " " << don4 << endl;
	}
}