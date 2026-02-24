#include <iostream>
#include <deque>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    const int MAX = 100000;
    vector<int> dist(MAX + 1, 1e9);
    deque<int> dq;
    vector<int> route(MAX+1);
    dq.push_front(n);
    dist[n] = 0;

    while (!dq.empty()) {
        int cur = dq.front();
        dq.pop_front();

        if (cur == k) {
            cout << dist[cur] << "\n";
            stack<int> tmp;
            int c = k;
            while(c != n) {
                tmp.push(c);
                c = route[c];
            }
            tmp.push(c);
            while(!tmp.empty()) {
                cout << tmp.top() << " ";
                tmp.pop();
            }
            return 0;
        }

        // *2 (cost 0)
        if (cur * 2 <= MAX && dist[cur * 2] > dist[cur]+1) {
            dist[cur * 2] = dist[cur]+1;
            dq.push_front(cur * 2);
            route[cur*2] = cur;
        }

        // -1 (cost 1)
        if (cur - 1 >= 0 && dist[cur - 1] > dist[cur] + 1) {
            dist[cur - 1] = dist[cur] + 1;
            dq.push_back(cur - 1);
            route[cur-1] = cur;
        }

        // +1 (cost 1)
        if (cur + 1 <= MAX && dist[cur + 1] > dist[cur] + 1) {
            dist[cur + 1] = dist[cur] + 1;
            dq.push_back(cur + 1);
            route[cur+1] = cur;
        }
    }
}