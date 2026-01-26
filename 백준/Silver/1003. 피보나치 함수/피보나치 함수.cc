#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    int tmp;
    cin >> n;
    vector<int> cntDp0(2);
    vector<int> cntDp1(2);
    vector<int> input(n);
    int inputMax = 0;
    cntDp0[0] = 1;
    cntDp1[0] = 0;
    cntDp0[1] = 0;
    cntDp1[1] = 1;
    for (int i = 0 ;i <n; i++) {
        cin >> input[i];
        if (inputMax < input[i])
            inputMax = input[i];
    }
    for (int i = 2; i <= inputMax; i++) {
        cntDp0.push_back(cntDp0[i-1]+cntDp0[i-2]);
        cntDp1.push_back(cntDp1[i-1]+cntDp1[i-2]);
    }
    for (int i = 0; i < input.size(); i++) {
        cout << cntDp0[input[i]] << " " << cntDp1[input[i]] << "\n";
    }
}