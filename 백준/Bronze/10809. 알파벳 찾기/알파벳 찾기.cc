#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int arr[26];
	//26개

	for (int j = 'a';j <= 'z'; j++) {
		for (int i = 0; i < s.length();i++) {
			int n = j - 'a';
			if (s[i] == j) {
				arr[n] = i;
				break;
			}
			if (i == s.length() - 1)
				arr[n] = -1;
		}
	}
	for (int i = 0;i < 26;i++) {
		cout << arr[i] << " ";
	}
}