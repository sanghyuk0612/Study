#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) { 
	int m,n;
	cin >> m;
	cin >> n;
	int cnt1 = 0;
	vector<string> chess(m);
	for (int i = 0;i < m;i++) {
		cin >> chess[i];
	}

	char fir1 = chess[0][0];
	char c1;
	vector<string> cut(8);
	vector<string> cut2(8);
	int cnt;
	vector<int> result;
	for (int k = 0; k <= m - 8;k++) {
		for (int l = 0;l <= n - 8;l++) {
			int start = k;
			for (int u = 0;u < 8;u++) {
				cut[u] = chess[start].substr(l,l+8);
				start++;
			}
			cut2 = cut;
			cnt = 0;
			fir1 = cut[0][0];
			for (int i = 0;i < 8;i++) {
				if (i != 0 && fir1 == cut[i][0]) {
					cnt++;
					if (cut[i][0] == 'B') {
						cut[i][0] = 'W';
					}
					else
						cut[i][0] = 'B';
				}
				c1 = cut[i][0];
				fir1 = cut[i][0];
				for (int j = 1; j < 8;j++) {
					if (c1 == cut[i][j]) {
						cnt++;
						if (cut[i][j] == 'B') {
							cut[i][j] = 'W';
						}
						else
							cut[i][j] = 'B';
					}
					c1 = cut[i][j];
				}
			}
			result.push_back(cnt);
			cnt = 1;
			if (cut2[0][0] == 'B') {
				cut2[0][0] = 'W';
			}
			else
				cut2[0][0] = 'B';
			fir1 = cut2[0][0];
			for (int i = 0;i < 8;i++) {
				if (i != 0 && fir1 == cut2[i][0]) {
					cnt++;
					if (cut2[i][0] == 'B') {
						cut2[i][0] = 'W';
					}
					else
						cut2[i][0] = 'B';
				}
				c1 = cut2[i][0];
				fir1 = cut2[i][0];
				for (int j = 1; j < 8;j++) {
					if (c1 == cut2[i][j]) {
						cnt++;
						if (cut2[i][j] == 'B') {
							cut2[i][j] = 'W';
						}
						else
							cut2[i][j] = 'B';
					}
					c1 = cut2[i][j];
				}
			}
			result.push_back(cnt);
		}
	}
	int min = *min_element(result.begin(), result.end());
	cout << min;
	
}