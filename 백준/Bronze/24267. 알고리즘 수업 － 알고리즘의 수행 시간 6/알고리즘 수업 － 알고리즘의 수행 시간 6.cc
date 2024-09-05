#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) { 
	long n;
	cin >> n;
	long time = 0;

	for (int i = 1;i <= n - 2;i++) {
		time = time + i * (n - 1 - i);
	}

	/*while (n - 2 >= 1) {
		for (long i = 0;i <= n - 2;i++) {
			time += i;
		}
		n--;
	}*/
	
	
	cout << time << endl << "3";
}