#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 1) {  // 홀수는 불가능
        cout << 0;
        return 0;
    }

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;  // 기본값 (아무것도 안 놓은 경우)
    dp[2] = 3;  // 3×2 크기의 경우의 수는 3가지

    for (int i = 4; i <= n; i += 2) {
        dp[i] = dp[i - 2] * 3;
        for (int j = 4; j <= i; j += 2) {
            dp[i] += dp[i - j] * 2;
        }
    }

    cout << dp[n];
    return 0;
}