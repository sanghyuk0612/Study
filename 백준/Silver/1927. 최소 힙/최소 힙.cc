#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    int tmp;
    for (int i = 0 ;i<n;i++) {
        cin >> tmp;
        if (tmp != 0) {
            pq.push(tmp);
        }
        else {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}