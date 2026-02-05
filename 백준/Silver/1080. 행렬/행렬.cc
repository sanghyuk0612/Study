#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> A, B;

void flip(int x, int y) {
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            A[i][j] = 1 - A[i][j];
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    A.assign(N, vector<int>(M));
    B.assign(N, vector<int>(M));

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            A[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            B[i][j] = s[j] - '0';
        }
    }

    int cnt = 0;

    for (int i = 0; i <= N - 3; i++) {
        for (int j = 0; j <= M - 3; j++) {
            if (A[i][j] != B[i][j]) {
                flip(i, j);
                cnt++;
            }
        }
    }

    if (A == B) cout << cnt;
    else cout << -1;

    return 0;
}