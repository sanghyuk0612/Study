#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
	string s1, s2, s3, s4;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;

	s1 += s2;
	s3 += s4;
	cout << stol(s1) + stol(s3);
}