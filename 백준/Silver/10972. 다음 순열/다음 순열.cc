#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1]) {
        i--;
    }

    if (i < 0) {
        cout << -1;
        return 0;
    }

    int j = n - 1;
    while (a[i] >= a[j]) {
        j--;
    }

    swap(a[i], a[j]);
    reverse(a.begin() + i + 1, a.end());

    for (int x : a) {
        cout << x << " ";
    }
}