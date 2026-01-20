#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop();              // 버리기
        q.push(q.front());    // 뒤로 보내기
        q.pop();
    }

    cout << q.front();
}