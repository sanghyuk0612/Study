#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(void) { 
	string s;
	cin >> s;
	vector<int> num;
	string result = "";
	int n;
	for (int i = 0;i < s.size();i++) {
		n = s[i] - '0';
		num.push_back(n);
	}
	sort(num.begin(), num.end(),greater<int>());
	for (int i = 0;i < s.size();i++) {
		result += to_string(num[i]);
	}
	cout << result;
}
