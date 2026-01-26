#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, goal;
    cin >> n >> goal;
    int cnt = 0;
    vector<int> coin(n);
    for (int i = 0; i <n;i++) {
        cin >> coin[i];
    }
    for (int i = coin.size()-1; i>=0; i--) {
        cnt += (goal / coin[i]);
        goal %= coin[i];
    }
    cout << cnt;
}