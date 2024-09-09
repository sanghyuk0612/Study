#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool check_666(string s) {
	int index = s.find("666");
	if (index == string::npos) {
		return false;
	}
	return true;
}
int main(void) { 
	int n;
	cin >> n;
	int cnt = 0;
	string s;
	int num=666;
	bool check;
	while (cnt != n) {
		s = to_string(num);
		check = check_666(s);
		if (check) {
			cnt++;
		}
		num++;
	}
	cout << num-1;
}
