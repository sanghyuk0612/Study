#include<iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    int maxV = 65;
    for (int i = 0 ;i < n;i++) {
        cin >> input[i];
        if (input[i] > maxV-1) {
        }
    }
    vector<vector<long long>> dp(maxV,vector<long long>(10));
    for (int i = 0 ; i<10; i++) {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }

    for (int i = 2 ;i<maxV ; i++) {
        long long first = 0;
        for (int j = 0; j <10;j++) {
            first+=dp[i-1][j];
        }
        dp [i][0] = first;
        for (int j = 1;j<10;j++) {
            dp[i][j] = dp[i][j-1]-dp[i-1][j-1];
        }
    }
    vector<long long> result(maxV,0);
    for (int i = 1 ; i < maxV; i++) {
        for (int j = 0 ; j<10;j++) {
            result[i]+=dp[i][j];
        }
    }

    for (int i = 0; i <n;i++) {
        cout << result[input[i]] << "\n";
    }
}