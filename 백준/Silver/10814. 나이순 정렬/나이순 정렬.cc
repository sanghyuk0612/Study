#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool compare(vector<string> s1, vector<string> s2) {
	int n1, n2;
	n1 = stoi(s1[0]);
	n2 = stoi(s2[0]);
	if (n1==n2) {
		return stoi(s1[2]) < stoi(s2[2]);
	}
	return n1 <n2;
}
int main(void) { 
	int n;
	cin >> n;
	vector<vector<string>> s(n);
	string tmp;
	for (int i = 0;i < n;i++) {
		cin >> tmp;
		s[i].push_back(tmp);
		cin >> tmp;
		s[i].push_back(tmp);
		s[i].push_back(to_string(i));
	}

	sort(s.begin(), s.end(), compare);
	for (int i = 0;i < s.size();i++) {
		cout << s[i][0] << " " << s[i][1] << "\n";
	}
}
