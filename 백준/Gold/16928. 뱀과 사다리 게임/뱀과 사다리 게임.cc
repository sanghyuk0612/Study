#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    unordered_map<int,int> ladder;
    unordered_map<int,int> snake;
    vector<int> dp(101, 999);
    int tmp1, tmp2;
    for (int i = 0 ;i <n; i++) {
        cin >> tmp1 >>tmp2;
        ladder.insert({tmp1, tmp2});
    }for (int i = 0 ;i < m; i++) {
        cin >> tmp1 >> tmp2;
        snake.insert({tmp1,tmp2});
    }
    int cur = 1;
    dp[1] = 0;
    for (int i = 1; i<100 ; i++) {
        if (ladder.count(i)) {
            dp[ladder[i]] = dp[i];
        }
        if (snake.count(i)) {
            if (dp[snake[i]]>dp[i]) {
                dp[snake[i]] = dp[i];
                i = snake[i]-1;
            }
            continue;
        }
        for (int j =1; j<=6;j++) {
            if (i+j>100) {
                break;
            }
            if (dp[i+j] > dp[i]+1) {
                dp[i+j] = dp[i]+1;
                continue;
            }
        }
    }
//    for (int i = 1;i<=100;i++) {
//        cout << dp[i]<< " ";
//        if (i%10==0) {
//            cout <<"\n";
//        }
//    }
    cout << dp[100];
}