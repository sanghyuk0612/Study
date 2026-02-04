#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int n, w;
    cin >> n >> w;
    vector<pair<int,int>> product(n);
    for (int i = 0 ;i<n; i++ ) {
        cin >> product[i].first;
        cin >> product[i].second;
    }
    sort(product.begin(), product.end());
    vector<vector<int>> dp(n,vector<int>(w+1, 0));
    for (int i = product[0].first ; i<=w;i++) {
        dp[0][i] = product[0].second;
    }
    int tmp1 ,tmp2;
    for (int i = 1; i<n;i++ ) {
        for (int j = 0; j<=w; j++) {
            if (j<product[i].first) {
                dp[i][j] = dp[i-1][j];
                continue;
            }
            tmp1 = dp[i-1][j-product[i].first] + product[i].second;
            tmp2 = dp[i-1][j];
            if (tmp1>tmp2) {
                dp[i][j] = tmp1;
            }
            else {
                dp[i][j] = tmp2;
            }
        }
    }
    cout << dp[n-1][w];
}