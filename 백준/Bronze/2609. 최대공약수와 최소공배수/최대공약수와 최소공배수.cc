#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int tmp;
	if (n1 > n2) {
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	int sn1=n1, sn2=n2;
	int max = 1;
	if (n2 % n1 == 0) {
		cout << n1 << endl<<n2;
		return 0;
	}

	for (int i = 2;i <= n1 / 2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			max = i;
		}
	}
	cout << max << endl;

	n1 = sn1;
	n2 = sn2;
	while (n1 != n2) {
		if (n1 > n2) {
			n2 += sn2;
		}
		else
			n1 += sn1;
	}
	cout << n1 << endl;

	

	
}