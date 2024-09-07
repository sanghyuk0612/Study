//같은 숫자는 싫어
#include<iostream>
#include<stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	int goal;
	cin >> n;
	cin >> goal;
	vector<int> card(n);
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}
	sort(card.begin(), card.end());
	int sum = 0;
	int num = 0;
	int cnt = 0;
	vector<int> result;
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				result.push_back(sum);
			}
		}
	}
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++) {
		if (result[i] > goal) {
			sum = result[i - 1];
			break;
		}
		if (i == result.size() - 1) {
			sum = result[i];
		}
	}
	cout << sum;

}