#include<iostream>
#include<cmath>
using namespace std;
int main(void) { 
	int a, b, v;
	cin >> a;
	cin >> b;
	cin >> v;
	int h = 0;
	int day = 0;
	int realhigh = v - a;
	day++;
	int remain= realhigh % (a - b);
	if (remain != 0) {
		day++;
	}
	int c = realhigh / (a - b);
	day += c;
	cout << day;
}