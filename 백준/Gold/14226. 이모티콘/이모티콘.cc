#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct State {
    int screen;
    int clip;
    int time;
};

int main() {
    int n;
    cin >> n;

    queue<State> q;
    vector<vector<bool>> visit(n+1, vector<bool>(n+1, false));

    q.push({1, 0, 0});
    visit[1][0] = true;

    while (!q.empty()) {
        State cur = q.front();
        q.pop();

        if (cur.screen == n) {
            cout << cur.time;
            return 0;
        }

        // 1. 복사
        if (!visit[cur.screen][cur.screen]) {
            visit[cur.screen][cur.screen] = true;
            q.push({cur.screen, cur.screen, cur.time+1});
        }

        // 2. 붙여넣기
        if (cur.clip > 0 && cur.screen + cur.clip <= n &&
            !visit[cur.screen + cur.clip][cur.clip]) {
            visit[cur.screen + cur.clip][cur.clip] = true;
            q.push({cur.screen + cur.clip, cur.clip, cur.time+1});
        }

        // 3. 삭제
        if (cur.screen > 1 &&
            !visit[cur.screen-1][cur.clip]) {
            visit[cur.screen-1][cur.clip] = true;
            q.push({cur.screen-1, cur.clip, cur.time+1});
        }
    }
}
