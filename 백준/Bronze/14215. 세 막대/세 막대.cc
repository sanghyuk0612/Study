#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) { 
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	vector<int> tmp;
	tmp.push_back(a);
	tmp.push_back(b);
	tmp.push_back(c);
	sort(tmp.begin(), tmp.end());
	if (tmp[0] + tmp[1] <= tmp[2]) {
		tmp[2] = tmp[0] + tmp[1] - 1;
	}
	cout << tmp[0] + tmp[1] + tmp[2];
}