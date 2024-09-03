#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	vector<string> ss(5);
	int max = 0;
	for (int i = 0;i < 5;i++) {
		cin >> ss[i];
		if (max < ss[i].length())
			max = ss[i].length();
	}
	for (int i = 0;i < max;i++) {
		for (int j = 0;j < 5;j++) {
			if (ss[j].length() < i + 1) {
				continue;
			}
			cout << ss[j][i];
		}
	}
}