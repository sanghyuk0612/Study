#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
using namespace std;
const vector<pair<int,int>> direction = {{0,1},{0,-1},{1,0},{-1,0}};
int main(void) {
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    vector<string> maze(n);
    vector<vector<int>> dp(n,vector<int>(m,10000));
    for (int i =0;i<n;i++) {
        cin >> maze[i];
    }
    dp[0][0] = 1;
    q.push(make_pair(0,0));
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();
        maze[cur.first][cur.second] = '0';
        for (int i = 0 ; i <4; i++){
            pair<int, int> tmp = direction[i];
            pair<int, int> next = make_pair(cur.first + tmp.first, cur.second+tmp.second);
            if (next.first >=0 && next.first<n && next.second>=0 && next.second<m) {
                if (maze[next.first][next.second] == '1') {
                    if (dp[cur.first][cur.second]+1 < dp[next.first][next.second]) {
                        dp[next.first][next.second] = dp[cur.first][cur.second]+1;
                        q.push(next);
                    }
                }
            }
        }
    }
    cout << (int)dp[n-1][m-1];
}