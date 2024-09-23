#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	string tmp;
	char arr[10][20];
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 20;j++) {
			arr[i][j] = '.';
		}
	}
	char c;
	string num;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		c = tmp[0];
		num = tmp.substr(1);
		
		arr[tmp[0] - 'A'][stoi(num)-1] = 'o';
	}
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 20;j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

