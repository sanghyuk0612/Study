#include <iostream>
using namespace std;
int main(void) {
    int t;
    int n, m, x, y;
    cin >> t;
    int cnt = 0;
    int curM, curN;
    for (int i = 0; i<t; i++) {
        cin >> m >> n >> x >> y;
        int cnt = 0;
        if (m < n) {
            curM = x;
            curN = x;
            cnt = x;
            while (curM != x || curN != y) {
                curN+=m;
                if (curN>n) {
                    curN%=n;
                }
                cnt+=m;
                if (cnt > m*n) {
                    cnt = -1;
                    break;
                }
            }
        }
        else {
            curM = y;
            curN = y;
            cnt = y;
            while (curM != x || curN != y) {
                curM+=n;
                if (curM>m) {
                    curM%=m;
                }
                cnt+=n;
                if (cnt > m*n) {
                    cnt = -1;
                    break;
                }
            }
        }
        cout << cnt << "\n";
    }
}