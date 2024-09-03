#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(void) { //c,d,l,n,s,n
	int m, n;
	cin >> m;
	cin >> n;
	vector<vector<int>> mat(m);

	int num;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n; j++) {
			cin >> num;
			mat[i].push_back(num);
		}
	}
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n; j++) {
			cin >> num;
			mat[i][j] += num;
		}
	}
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n; j++) {
			num = mat[i][j];
			cout << num << " ";
		}
		cout << endl;
	}
}