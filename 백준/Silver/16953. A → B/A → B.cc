#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    int cnt = 1;

    while (b > a) {
        if (b % 10 == 1) {
            b /= 10;
            cnt++;
        }
        else if (b % 2 == 0) {
            b /= 2;
            cnt++;
        }
        else {
            break;
        }
    }

    if (b == a)
        cout << cnt;
    else
        cout << -1;
}