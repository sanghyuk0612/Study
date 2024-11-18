#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int max = n;
	vector<int> input;
	while (n) {
		input.push_back(n);
		if (n > max)
			max = n;
		cin >> n;
	}
	vector<int> ari;
	vector<int> sosu;
	ari.push_back(0);
	ari.push_back(0);
	for (int i = 2;i <= max;i++) {
		ari.push_back(i);
	}
	int min;
	for (int i = 2;i < ari.size();i++) {
		if (!ari[i])
			continue;
		min = ari[i];
		int j = 2;
		sosu.push_back(min);
		while (min * j < ari.size()) {
			ari[min * j] = 0;
			j++;
		}
	}
	int tmp;
	for (int j = 0; j < input.size();j++) {
		n = input[j];
		for (int i = 0; sosu[i] <= n/2;i++) {
			tmp = sosu[i];
			if (ari[n-tmp]) {
				cout << n << " = " << tmp << " + " << n - tmp << "\n";
				break;
			}
			if (sosu[i] == n/2) {
				cout << "Goldbach's conjecture is wrong.\n";
			}
		}
	}
}