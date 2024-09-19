#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
#include<list>
using namespace std;
int main(void) {
	int n;
	string s;
	cin >> s;
	cin >> n;
	list<char> linked;
	for (int i = 0;i < s.size();i++) {
		linked.push_back(s[i]);
	}
	list<char>::iterator curlink= linked.end();
	char tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == 'P') {
			cin >> tmp;
			if (curlink == linked.end()) {
				linked.push_back(tmp);
				curlink = linked.end();
			}
			else {
				linked.insert(curlink, tmp);
			}
		}
		else if (tmp == 'L') {
			if (curlink != linked.begin())
				curlink--;
		}
		else  if (tmp == 'D') {
			if (curlink != linked.end())
				curlink++;
		}
		else  if (tmp == 'B') {
			if (curlink != linked.begin()&&linked.size()!=0) {
				if (curlink == linked.end()) {
					linked.pop_back();
					curlink = linked.end();
				}
				else {
					curlink--;
					curlink = linked.erase(curlink);
				}

			}
		}
	}
	for (auto i = linked.begin(); i != linked.end();i++) {
		cout << *i;
	}
}
