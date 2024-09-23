#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int left, right;
	cin >> left;
	cin >> right;
	int big;
	if (left < right)
		big = right;
	else
		big = left;
	int num = 1;
	while(num <= left*right){
		if (num % left == 0 && num % right == 0) {
			cout << 3;
		}
		else if (num % left == 0) {
			cout << 2;
		}
		else if (num % right == 0) {
			cout << 1;
		}
		num++;
	}

	

}

