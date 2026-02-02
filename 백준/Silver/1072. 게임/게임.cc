#include <iostream>
using namespace std;

int main() {
    long long total, win;
    cin >> total >> win;

    long long z = (win * 100) / total;

    if (z >= 99) {
        cout << -1;
        return 0;
    }

    long long left = 1, right = 1000000000LL;
    long long ans = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long nz = (win + mid) * 100 / (total + mid);

        if (nz > z) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
}