#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string s1, string s2) {
	if (s1.size() == s2.size()) {
		int i = 0;
		while (i<s1.size() && s1[i] == s1[i]) {
			if (s1[i] != s2[i]) {
				return s1[i] < s2[i];
			}
			i++;
		}
	}
	return s1.size() < s2.size();
}
int main(void) { 
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0;i < n;i++) {
		cin >> s[i];
	}

	sort(s.begin(), s.end(), compare);
	s.erase(unique(s.begin(), s.end()), s.end());
	for (int i = 0;i < s.size();i++) {
		cout << s[i] << "\n";
	}
}
