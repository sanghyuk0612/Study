#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int x,y,a,b;
	cin >> x;
	cin >> y;

	cin >> a;
	cin >> b;
	int min = x;
	if (min > y) {
		min = y;
	}
	if (min > a-x) {
		min = a-x;
	}
	if (min > b-y) {
		min = b-y;
	}
	cout << min;

}