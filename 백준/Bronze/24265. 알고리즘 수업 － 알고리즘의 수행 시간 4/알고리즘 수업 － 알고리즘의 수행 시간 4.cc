#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) { 
	long n;
	cin >> n;
	
	long time = 0;
	for (long i = 0;i < n-1;i++) {
		for (long j = i + 1;j < n;j++) {
			time++;
		}
	}
	cout << time << endl << "2";
}