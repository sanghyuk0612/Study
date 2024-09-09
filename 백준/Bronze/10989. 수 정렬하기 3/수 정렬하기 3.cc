#include<iostream>

using namespace std;
int main(void) { 
	int n;
	cin >> n;
    int tmp;
    int countArray[10001] = { 0 };
    for (int i = 0;i < n;i++) {
        cin >> tmp;
        countArray[tmp]++;
    }
    for (int i = 0;i < 10001;i++) {
        if (countArray[i]>0) {
            cout << i << "\n";
            countArray[i]--;
            i--;
        }
    }
}
