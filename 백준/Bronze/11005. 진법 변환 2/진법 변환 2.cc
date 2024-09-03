#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(void) { 
	int num;
	int n;
	cin >> num;
	cin >> n;
	string result="";
	while (num > 0) {
		int h = num % n;
		char c;
		if (h >= 10) {
			h -= 10;
			c = h + 'A';
			result =  c+ result ;
		}
		else
		{
			result =  to_string(h)+ result;
		}
		num /= n;
	}
	cout << result;
}