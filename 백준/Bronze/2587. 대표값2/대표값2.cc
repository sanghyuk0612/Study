#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) { 
	int n = 5;
	vector<int> result(n);
	int hap = 0;
	for (int i = 0;i < n;i++) {
		cin >> result[i];
		hap += result[i];
	}
	sort(result.begin(), result.end());
	cout << hap / 5 << endl << result[2];
	
}
