#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	int n;
	vector<vector<string>> ss(20);
	for (int i = 0;i < 20;i++) {
		string s;
		for (int j = 0;j < 3;j++) {
			cin >> s;
			ss[i].push_back(s);
		}
	}
	float cnt=0;
	float hap=0;
	for (int i = 0;i < 20;i++) {
		float num = stof(ss[i][1]);
		if (ss[i][2] == "P") {
			continue;
		}
		else if (ss[i][2] == "A+") {
			hap += num * 4.5;
		}
		else if (ss[i][2] == "A0") {
			hap += num * 4.0;
		}
		else if (ss[i][2] == "B+") {
			hap += num * 3.5;
		}
		else if (ss[i][2] == "B0") {
			hap += num * 3.0;
		}
		else if (ss[i][2] == "C+") {
			hap += num * 2.5;
		}
		else if (ss[i][2] == "C0") {
			hap += num * 2.0;
		}
		else if (ss[i][2] == "D+") {
			hap += num * 1.5;
		}
		else if (ss[i][2] == "D0") {
			hap += num * 1;
		}
		else if (ss[i][2] == "F") {
			hap += num * 0;
		}
		cnt += num;
	}
	cout << hap / cnt;
}