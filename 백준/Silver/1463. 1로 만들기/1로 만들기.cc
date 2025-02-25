#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    int cnt = 0;
    int n1, n2, n3;
    int best;
    for (int i = 4; i < n+1; i++) {
        best = 99999;
        if (i % 3 == 0) {
            n1 = arr[i / 3] + 1;
            if (best > n1) {
                best = n1;
            }
        }
        if (i % 2 == 0) {
            n2 = arr[i / 2] + 1;
            if (best > n2) {
                best = n2;
            }
        }
        n3 = arr[i - 1] + 1;
        if (best > n3) {
            best = n3;
        }
        arr[i] = best;
    }
    cout << arr[n];
}