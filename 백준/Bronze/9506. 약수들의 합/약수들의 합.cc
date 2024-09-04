#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int n;
	cin >> n;
	vector<int> vec;
	while (n != -1) {
		vec.push_back(n);
		cin >> n;
	}
	for (int i = 0;i < vec.size();i++) {
		int num = vec[i];
		vector<int> yak;
		for (int j = 1;j <= num/2;j++) {
			if (num % j == 0) {
				yak.push_back(j);
			}
		}
		int hap=0;
		for (int j = 0;j < yak.size();j++) {
			hap += yak[j];
		}
		if (hap == num) {
			cout << num << " = " << yak[0];
			for (int i = 1;i < yak.size();i++) {
				cout << " + "<<yak[i];
			}
		}
		else {
			cout << num << " is NOT perfect.";
		}
		cout << endl;
	}
}