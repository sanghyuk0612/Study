#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
#include<cmath>
using namespace std;


int main(void) {
	int n, k;
	long t;
	cin >> n;
	cin >> k;
	cin >> t;
	vector<int> shark(n);
	stack<int> st;
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		cin >> shark[i];
	}
	sort(shark.begin(), shark.end());
	int i = 0;
	while (cnt < k) {
		while (i < n&&shark[i] < t) {
			st.push(shark[i]);
			i++;
		}
		if (st.empty()) {
			cout << t;
			return 0;
		}
		if (st.top() < t) {
			t += st.top();
			st.pop();
			cnt++;
		}
	}
	cout << t;
	return 0;
}

