#include<iostream>
using namespace std;
int main(void) {
	int n, m;
	cin >> n;
	cin >> m;
	int* basket = new int[n];
	for (int i = 0; i < n;i++) {
		basket[i] = 0;
	}
	for (int i = 0;i < m;i++) {
		int a1, a2, a3;
		cin >> a1;
		cin >> a2;
		cin >> a3;
		for (int j = a1; j <= a2;j++) {
			basket[j-1] = a3;
		}
	}
	for (int i = 0; i < n;i++) {
		cout << basket[i] << " ";
	}
}