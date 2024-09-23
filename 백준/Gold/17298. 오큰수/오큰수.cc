#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> result(n);
	stack<int> st;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0;
	while (i < n) {
		if (st.empty()) {
			st.push(i);
		}
		while (i<n&& !st.empty() && arr[st.top()] >= arr[i]) {
			st.push(i);
			i++;
		}
		while (i < n&& !st.empty() && arr[st.top()] < arr[i]) {
			result[st.top()] = arr[i];
			st.pop();
		}
	}
	while (!st.empty()) {
		result[st.top()] = -1;
		st.pop();
	}
	result[n - 1] = -1;
	for (int i = 0;i < n;i++) {
		cout << result[i] << " ";
	}
}

