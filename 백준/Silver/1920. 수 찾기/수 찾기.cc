#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, n2;
    cin >> n;
    set<int> input;
    int tmp;
    for (int i = 0; i <n;i ++) {
        cin >> tmp;
        input.insert(tmp);
    }
    cin >> n2;
    for (int i = 0 ;i < n2; i++) {
        cin >> tmp;
        if(input.find(tmp) == input.end())
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}