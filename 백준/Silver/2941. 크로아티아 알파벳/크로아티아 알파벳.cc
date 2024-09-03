#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0;i < s.length();) {
		if (s[i] == 'c') {
			i++;
			if (s[i] == '=') {
				cnt++;
				i++;
			}
			else if (s[i] == '-') {
				cnt++;
				i++;
			}
			else {
				cnt++;
			}
			
		}
		else if (s[i] == 'd') {
			i++;
			if (s[i] == 'z') {
				i++;
				if (s[i] == '=') {
					cnt++;
					i++;
				}
				else {
					i--;
					cnt++;
				}
			}
			else if (s[i] == '-') {
				cnt++;
				i++;
			}
			else {
				cnt++;
			}

		}
		else if (s[i] == 'l') {
			i++;
			if (s[i] == 'j') {
				i++;
				cnt++;
			}
			else {
				cnt++;
			}
		}
		else if (s[i] == 'n') {
			i++;
			if (s[i] == 'j') {
				i++;
				cnt++;
			}
			else {
				cnt++;
			}
		}
		else if (s[i] == 's') {
			i++;
			if (s[i] == '=') {
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else if (s[i] == 'z') {
			i++;
			if (s[i] == '=') {
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else {
			cnt++;
			i++;
		}
	}
	cout << cnt;
}