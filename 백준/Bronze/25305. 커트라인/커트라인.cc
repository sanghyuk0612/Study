#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) { 
	int n,prize;
	cin >> n;
	cin >> prize;
	vector<int> result(n);
	for (int i = 0;i < n;i++) {
		cin >> result[i];
	}
	sort(result.begin(), result.end());
	cout << result[result.size() - prize];
	
}
