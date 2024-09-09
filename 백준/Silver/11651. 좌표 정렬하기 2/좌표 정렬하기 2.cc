#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool compare(vector<int> v1, vector<int> v2) {
	if (v1[1] == v2[1]) {
		return v1[0] < v2[0];
	}
	return v1[1] < v2[1];
}
int main(void) { 
	int n;
	cin >> n;
	vector<vector<int>> point(n);
	int x, y;
	for (int i = 0;i < n;i++) {
		cin >> x;
		cin >> y;
		point[i].push_back(x);
		point[i].push_back(y);
	}
	sort(point.begin(), point.end(), compare);
	for (int i = 0;i < n;i++) {
		cout << point[i][0] << " " << point[i][1] << "\n";
	}
}
