//같은 숫자는 싫어
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<int> A(3);
	vector<int> B(3);
	vector<int> C(3);
	cin >> A[0];
	cin >> A[1];
	cin >> A[2];
	cin >> B[0];
	cin >> B[1];
	cin >> B[2];
	int x=0, y=0;
	//ax+by =c
	//dx+ey =f
	int a = A[0];
	int b = A[1];
	int c = A[2];
	int d = B[0];
	int e = B[1];
	int f = B[2];
	for (int i = 0; i < 3; i++) {
		A[i] = A[i] * d;
		B[i] = B[i] * a;
	}
	C[1] = A[1] - B[1];
	C[2] = A[2] - B[2];

	y = C[2] / C[1];
	if (a == 0) {
		x = (f - e * y) / d;
	}
	else {
		x = (c - b * y) / a;
	}
	
	cout << x << " " << y;
}