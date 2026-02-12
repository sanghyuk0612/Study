#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<priority_queue<int>> input(7);
    int tmp1, tmp2;
    int cnt = 0;
    for (int i = 0; i<n; i++) {
        cin >> tmp1 >> tmp2;
        if (input[tmp1].empty()) {
            input[tmp1].push(tmp2);
            cnt++;
            continue;
        }
        while (!input[tmp1].empty() && input[tmp1].top() >= tmp2) {
            if (input[tmp1].top() == tmp2) {
                break;
            }
            input[tmp1].pop();
            cnt++;
        }
        if (input[tmp1].top() == tmp2) {
            continue;
        }
        input[tmp1].push(tmp2);
        cnt++;
    }
    cout << cnt;
}