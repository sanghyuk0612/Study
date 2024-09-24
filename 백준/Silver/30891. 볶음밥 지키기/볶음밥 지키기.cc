#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
#include<cmath>
using namespace std;


int main(void) {
	int n, r;
	cin >> n;
	cin >> r;
	vector<vector<int>> rice(n);
	int x, y;
	int minx=999, miny=999;
	int maxx=-999, maxy= -999;
	int cnt;
	vector<int> result(2);
	for (int i = 0;i < n;i++) {
		cin >> x;
		cin >> y;
		rice[i].push_back(x);
		rice[i].push_back(y);
		if (minx > x) {
			minx = x;
		}
		if (maxx < x) {
			maxx = x;
		}
		if (miny > y) {
			miny = y;
		}
		if (maxy < y) {
			maxy = y;
		}
	}
	sort(rice.begin(), rice.end());
	double dis;
	int max = -1;
	for (int i = minx;i <= maxx;i++) {
		for (int j = miny;j <= maxy;j++) {
			cnt = 0;
			for (int k = 0;k < n;k++) {
				if (rice[k][0] > i + r)
					break;
				if (rice[k][0]<i - r)
					continue;
				if (rice[k][1]<j - r || rice[k][1]>j + r)
					continue;
				dis = sqrt((i - rice[k][0]) * (i - rice[k][0]) + (j - rice[k][1]) * (j - rice[k][1]));
				if (dis <= r) {
					cnt++;
				}
			}
			if (max < cnt) {
				max = cnt;
				result[0] = i;
				result[1] = j;
			}

		}
	}
	cout << result[0] << " " << result[1];
}

