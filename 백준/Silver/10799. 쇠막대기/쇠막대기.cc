#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int cnt = 0;
	int result = 0;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == '('&&s[i+1] ==')') {
			result += cnt;
			i++;
			i++;
			continue;
		}
		while (s[i] == '(') {
			cnt++;
			i++;
			if (s[i + 1] == ')') {
				result += cnt;
				i++;
				i++;
				break;
			}
		}
		while (i<s.length()&&s[i] == ')') {
			result++;
			i++;
			cnt--;
		}
	}
	cout << result;
}

