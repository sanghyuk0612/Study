#include<iostream>
using namespace std;
int main(void) {
    int d , k;
    cin >> d >> k;
    int prev, now;
    int tmp;
    for (int i= 0; i < k/2;i++) {
        now = k;
        prev = k * 0.5 + i;
        int j;
        for (j = d-1;j>1;j--) {
            tmp = prev;
            prev = now - prev;
            now = tmp;
            if (prev>now || prev <= 0) {
                break;
            }
        }
        if (j == 1 && prev>0 && now>0 && prev<=now) {
            break;
        }
    }
    cout << prev << "\n" << now;
}
