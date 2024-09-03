#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n

	int n;
	cin >> n;
	//n = 1;
	vector<string> ss(n);
	vector<int> visit;
	visit.assign(26, 0);
	int cnt = 0;
	
	for (int i = 0;i < n;i++) {
		//ss[0] = "abacc";
		cin >> ss[i];
	}
	for (int i = 0;i < n;i++) {
		string s = ss[i];
		for (int j = 0;j < s.length();) {
			int num;
			char c = s[j];
			num = c - 'a';
			if (!visit[num]) {
				visit[num] = 1;
			}
			else {
				j++;
				break;
			}
			while (c == s[j]) {
				j++;
			}
			if (j == s.length())
				cnt++;
		}
		visit.assign(26, 0);

	}
	cout << cnt;
}