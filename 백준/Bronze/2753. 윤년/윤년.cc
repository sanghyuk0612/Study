#include<iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	int b = 0;
	if (a % 4 == 0) {
		if (a % 100 != 0 || a % 400 == 0)
			b = 1;
	}
	cout << b;
}