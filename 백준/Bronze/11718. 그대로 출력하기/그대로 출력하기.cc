#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	vector<string> ss;
	for (int i = 0;i < 100;i++) {
		string s;
		getline(cin, s);
		if (s == "") {
			break;
		}
		ss.push_back(s);
	}
	for (int i = 0;i < ss.size();i++) {
		cout << ss[i] << endl;
	}
}