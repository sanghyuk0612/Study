#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(void) {
	int N, K;
	cin >> N;
	cin >> K;
	int die = 0;
	vector<bool> people(N,true);
	vector<int> result;
	int cnt = 0;
	int tmp = 0;
	while (die != N) {
		cnt = 0;
		while (cnt != K) {
			tmp++;
			tmp %= N;
			if (people[tmp])
				cnt++;
		}
		die++;
		if (tmp == 0) {
			result.push_back(N);
		}
		else {
			result.push_back(tmp);
		}

		people[tmp] = false;
	}
	cout << "<";
	for (int i = 0;i < result.size();i++) {
		cout << result[i];
		if (i != result.size() - 1) {
			cout << ", ";
		}
	}
	cout << ">";
}
