#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> input(n+1);
    for (int i = 1 ; i<=n;i++) {
        cin >> input[i];
    }
    vector<int> dp(n+1,9999);
    dp[1] = 0;
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=input[i];j++) {
            if (i+j>n) {
                break;
            }
            if (dp[i+j]>dp[i]+1) {
                dp[i+j]= dp[i]+1;
            }
        }
    }
    if (dp[n]==9999) {
        cout <<-1;
    }
    else {
        cout << dp[n];
    }
}