#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for (int i = 2; i<n;i++) {
        v.push_back(v[i-1]%15746 + v[i-2]%15746);
    }
    cout << (v[v.size()-1])%15746;
}