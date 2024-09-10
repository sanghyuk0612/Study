#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<int> num(n);
	vector<int> result(n);
	map<int, int> ma;
	for (int i = 0;i < n;i++) {
		cin >> num[i];
	}
	result = num;
	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()), num.end());
	for (int i = 0;i < num.size();i++) {
		ma.insert(make_pair(num[i], i));
	}
	for (int i = 0;i < result.size();i++) {
		int k = result[i];
		int index = ma[k];
		result[i] = index;
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << " ";
	}
}
