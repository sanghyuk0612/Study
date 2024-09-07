//같은 숫자는 싫어
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	long sum=0;
	long result = 0;
	for (long i = 0; i < n; i++) {
		string s = to_string(i);
		sum = 0;
		for (long j = 0; j < s.size(); j++) {
			sum = sum + int(s[j]) - '0';
		}
		sum += i;
		if (sum == n) {
			result = i;
			break;
		}
	}
	if (sum != n) {
		result = 0;
	}
	cout << result;
}