#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(void) { 
	int a, b;
	cin >> a;
	cin >> b;
	vector<int> arr;
	vector<string> result;

	while (a != 0) {
		arr.push_back(a);
		arr.push_back(b);
		cin >> a;
		cin >> b;
	}
	for (int i = 0;i < arr.size();i+=2) {
		int num1, num2;
		num1 = arr[i];
		num2 = arr[i + 1];
		if (num1 % num2 == 0) {
			result.push_back("multiple");
		}
		else if(num2%num1==0){
			result.push_back("factor");
		}
		else {
			result.push_back("neither");
		}
	}
	for (int i = 0;i < result.size();i++) {
		cout << result[i] << endl;
	}
}