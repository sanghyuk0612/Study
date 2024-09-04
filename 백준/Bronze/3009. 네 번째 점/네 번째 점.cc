#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int x1, x2, x3, y1, y2, y3;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	int x4, y4;
	if (x1 == x2) {
		x4 = x3;
	}
	else if (x2 == x3) {
		x4 = x1;
	}
	else if (x1 == x3) {
		x4 = x2;
	}
	if (y1 == y2) {
		y4 = y3;
	}
	else if (y2 == y3) {
		y4 = y1;
	}
	else if (y1 == y3) {
		y4 = y2;
	}
	cout << x4 << " " << y4;

}