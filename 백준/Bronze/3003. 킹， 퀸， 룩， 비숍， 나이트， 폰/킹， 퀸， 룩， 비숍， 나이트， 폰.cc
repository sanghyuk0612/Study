#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	int arr[6] = { 1,1,2,2,2,8 };
	int n;
	for (int i = 0;i < 6;i++) {
		cin >> n;
		arr[i] -= n;
	}
	for (int i = 0;i < 6;i++) {
		cout << arr[i] << " ";
	}
}