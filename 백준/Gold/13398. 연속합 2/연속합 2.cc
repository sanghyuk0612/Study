#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
    }
    vector<vector<int>> dp(2, vector<int>(n));
    int high = input[0];
    dp[0][0] = input[0];
    dp[1][0] = input[0];
    for (int i = 1;i < n;i++) {
        if (dp[0][i - 1] + input[i] > input[i]) {
            dp[0][i] = dp[0][i - 1] + input[i];
        }
        else {
            dp[0][i] = input[i];
        }
        if (high < dp[0][i]) {
            high = dp[0][i];
        }
        if (input[i] < 0) {
            int tmp = dp[1][i-1]+input[i];
            if(dp[0][i-1]<tmp){
                dp[1][i]=tmp;
            }
            else{
                dp[1][i] = dp[0][i-1];
            }
        }
        else{
            dp[1][i] = dp[1][i-1]+input[i];
        }
        if (high < dp[1][i]) {
            high = dp[1][i];
        }
    }
    cout << high;
}