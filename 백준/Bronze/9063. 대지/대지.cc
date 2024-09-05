#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	int x, y;
	vector<int> arr;
	int minx, miny, maxx, maxy;
	minx = 99999;
	miny = 99999;
	maxx = -100000;
	maxy = -100000;
	
	for (int i = 0;i < n;i++) {
		cin >> x;
		cin >> y;
		arr.push_back(x);
		arr.push_back(y);
		if (minx > x) {
			minx = x;
		}
		if (miny > y) {
			miny = y;
		}
		if (maxx < x) {
			maxx = x;
		}
		if (maxy < y) {
			maxy = y;
		}
	}
	if (n == 1) {
		cout << "0";
		return 0;
	}
	int Xlen = maxx - minx;
	int Ylen = maxy - miny;
	cout << Xlen * Ylen;
}