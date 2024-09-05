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
	vector<vector<int>> vec;
	while (a != 0) {
		vector<int> tmp;
		tmp.push_back(a);
		tmp.push_back(b);
		tmp.push_back(c);
		sort(tmp.begin(), tmp.end());
		vec.push_back(tmp);
		cin >> a;
		cin >> b;
		cin >> c;
	}
	for (int i = 0;i < vec.size();i++) {
		if (vec[i][0] + vec[i][1] <= vec[i][2]) {
			cout << "Invalid" << endl;
			continue;
		}
		else if (vec[i][0] == vec[i][2]) {
			cout << "Equilateral" << endl;
		}
		else if (vec[i][0] == vec[i][1] || vec[i][1]==vec[i][2]) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	
}