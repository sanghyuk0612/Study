#include<iostream>
using namespace std;
int main(void) {
	int n, m;
	cin >> n;
	cin >> m;
	int* basket = new int[n];
	for (int i = 0; i < n;i++) {
		basket[i] = i+1;
	}
	for (int i = 0;i < m;i++) {
		int a1, a2;
		cin >> a1;
		cin >> a2;
		a1--;
		a2--;
		int tmp;
		tmp = basket[a1];
		basket[a1] = basket[a2];
		basket[a2] = tmp;
	}
	for (int i = 0; i < n;i++) {
		cout << basket[i] << " ";
	}
}