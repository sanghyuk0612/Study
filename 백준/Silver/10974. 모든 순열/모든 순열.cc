#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i+1;
    }
    for (int x : a) {
        cout << x << " ";
    }
    cout << "\n";
    bool stopFlag = false;
    while (true) {
        int i = n - 2;
        while (i >= 0 && a[i] >= a[i + 1]) {
            i--;
        }
        if (i < 0) {
            break;
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
        cout << "\n";
    }
}