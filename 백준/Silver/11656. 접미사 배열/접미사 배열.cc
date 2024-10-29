#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector <string> result;
	for (int i = 0;i < s.size();i++) {
		result.push_back(s.substr(i));
	}
	sort(result.begin(), result.end());
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << endl;
	}
}