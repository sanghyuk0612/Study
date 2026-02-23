#include<iostream>
#include<queue>
#include<vector>

using namespace std;
vector<int> visit;
int main(void){
    int n, k;
    cin >> n >> k;
    queue<pair<int,int>> q;
    q.push({n,0});
    visit.resize(100000 , 0);
    visit[n] = 1;
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        visit[cur.first] = cur.second+1;
        q.pop();
        if (cur.first == k) {
            cout << cur.second;
            return 0;
        }
        if (cur.first-1>=0 &&!visit[cur.first-1]) {
            q.push({cur.first-1, cur.second+1});
        }
        if (cur.first+1 <= 100000 && !visit[cur.first+1]) {
            q.push({cur.first+1, cur.second+1});
        }
        if (cur.first*2 <= 100000 && !visit[cur.first*2]) {
            q.push({cur.first*2, cur.second+1});
        }
    }
}