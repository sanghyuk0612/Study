#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) { 
	int a1, a0,c,n0;
	cin >> a1;
	cin >> a0;
	cin >> c;
	cin >> n0;
	//O(g(n)) = {f(n) | 모든 n ≥ n0에 대하여 f(n) ≤ c × g(n)인 양의 상수 c와 n0가 존재한다}
	// f(n) = a1n + a0  g(n) = n
	int n;
	int result = 0;
	if (a1 * n0 + a0 <= c * n0&&a1<=c) {
		result = 1;
	}
	//7n +7 <= 8*n
	cout << result;

}