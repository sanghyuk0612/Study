#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+2, 0);
    int tmp;
    int t, m;
    for (int i = 1; i <=n;i++) {
        if (dp[i-1]>dp[i]) {
            dp[i]=dp[i-1];
        }
        cin >> t >> m;
        if (i+t <= n+1) {
            tmp = dp[i] + m;
            if (tmp > dp[i+t]) {
                dp[i+t] = tmp;
            }
        }
    }
    if (dp[n]>dp[n+1]) {
        dp[n+1]=dp[n];
    }
    cout << dp[n+1];
}