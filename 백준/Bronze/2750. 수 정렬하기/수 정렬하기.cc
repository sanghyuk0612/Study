#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) { 
	int n;
	cin >> n;
	vector<int> result(n);
	for (int i = 0;i < n;i++) {
		cin >> result[i];
	}
	sort(result.begin(), result.end());
	for (int i = 0;i < n;i++) {
		cout << result[i] << endl;
	}
	
}
