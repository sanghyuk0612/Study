#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, goal;
    cin >> n >> goal;
    int h;
    priority_queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> h;
        q.push(h);
    }

    long long total = 0;
    long long cnt = 0;
    int prev = q.top();

    while (!q.empty()) {
        int cur = q.top();
        q.pop();
        cnt++;

        int next = q.empty() ? 0 : q.top();
        int diff = cur - next;

        if (total + cnt * diff >= goal) {
            int need = goal - total;
            int answer = cur - (need + cnt - 1) / cnt;
            cout << answer;
            return 0;
        }

        total += cnt * diff;
    }
}