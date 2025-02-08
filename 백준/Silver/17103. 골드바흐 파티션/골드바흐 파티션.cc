#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int max=-9999;
	vector<int> input(n);
	for (int i=0;i<n;i++) {
        cin >> input[i];
		if (max < input[i])
			max = input[i];
        
	}
	vector<int> ari;
	vector<int> sosu;
    vector<int> result;
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
    int cnt;
	for (int j = 0; j < input.size();j++) {
		n = input[j];
        cnt =0;
		for (int i = 0; sosu[i] <= n/2;i++) {
			tmp = sosu[i];
			if (ari[n-tmp]) {
                cnt++;
			}
		}
        result.push_back(cnt);
	}
    for (int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}