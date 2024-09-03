#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	vector<int> n(26);

	for (int i = 0;i < s.length();i++) {
		s[i] = tolower(s[i]);
		n[s[i] - 'a']++;
	}
	int max = *max_element(n.begin(), n.end());
	int cnt = count(n.begin(), n.end(), max);
	if (cnt != 1) {
		cout << "?";
		return 0;
	}
	int max_index = max_element(n.begin(), n.end()) - n.begin();
	char c = max_index + 'A';
	cout << c;
}