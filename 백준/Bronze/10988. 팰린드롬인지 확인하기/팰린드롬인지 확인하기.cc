#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int i = 0;
	int j = s.length() - 1;
	while (i <= j) {
		if (s[i] != s[j]) {
			cout << "0";
			return 0;
		}
		i++;
		j--;
	}
	cout << "1";
}