#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<string> vec;
	for (int i = 0;i < n;i++) {
		string m;
		string s;
		cin >> m;
		cin >> s;
		vec.push_back(m);
		vec.push_back(s);
	}
	for (int i = 0;i < vec.size();i+=2) {
		int re = stoi(vec[i]);
		for (int j = 0; j < vec[i+1].length();j++) {
			for (int k = 0;k < re;k++) {
				cout << vec[i+1][j];
			}
		}
		cout << endl;
	}
}