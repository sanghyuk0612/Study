#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	vector<int> result;
	vector<int> ari;
	ari.push_back(0);
	ari.push_back(0);
	for (int i = 2;i <= n2;i++) {
		ari.push_back(i);
	}
	int cnt = 0;
	int min;
	for(int i=2;i<ari.size();i++) {
		if (!ari[i])
			continue;
		min = ari[i];
		int j = 2;
		while (min*j < ari.size()) {
			ari[min * j] = 0;
			j++;
		}
	}
	for (int i = n1; i <= n2;i++) {
		if (!ari[i]) {
			continue;
		}
		result.push_back(ari[i]);
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << endl;
	}
}