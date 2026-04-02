#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    int answer = 0;
    int total = N * M;

    // mask의 각 비트:
    // 1 -> 가로 조각
    // 0 -> 세로 조각
    for (int mask = 0; mask < (1 << total); mask++) {
        int sum = 0;

        // 가로 조각 계산
        for (int i = 0; i < N; i++) {
            int cur = 0;
            for (int j = 0; j < M; j++) {
                int idx = i * M + j;
                if (mask & (1 << idx)) {
                    cur = cur * 10 + (board[i][j] - '0');
                } else {
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }

        // 세로 조각 계산
        for (int j = 0; j < M; j++) {
            int cur = 0;
            for (int i = 0; i < N; i++) {
                int idx = i * M + j;
                if ((mask & (1 << idx)) == 0) {
                    cur = cur * 10 + (board[i][j] - '0');
                } else {
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }

        answer = max(answer, sum);
    }

    cout << answer << '\n';
    return 0;
}