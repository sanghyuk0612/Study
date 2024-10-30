#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n1, n2;
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> n1 >> n2;
		int sn1 = n1, sn2 = n2;
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
	

	
}