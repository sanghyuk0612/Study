#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxValue = 0;
bool stopFlag = false;
vector<int> plusVector(vector<int> v, int idx);
bool isUnique(vector<int> v);
int main(void) {
    int n1, n2;
    cin >> n1 >> n2;
    maxValue = n1;
    vector<vector<int>> result;
    vector<int> temp(n2);
    if (n2 == 1) {
        for (int i = 1 ; i <= n1; i++) {
            cout << i << "\n";
        }
        return 0;
    }
    for(int i = 0; i<n2; i++) {
        temp[i] = i+1;
    }
    for (int j = 0; j < temp.size(); j++) {
        cout << temp[j] << " ";
    }
    cout << "\n";

    while(!stopFlag) {
        temp = plusVector(temp, temp.size() - 1);
        if (stopFlag)
            break;
        if (!isUnique(temp)) {
            continue;
        }
        for (int j = 0; j < temp.size(); j++) {
            cout << temp[j] << " ";
        }
        cout << "\n";
    }
}

bool isUnique(vector<int> v) {
    for (int i = 1; i <= maxValue; i++) {
        if (count(v.begin(), v.end(), i) > 1) {
            return false;
        }
    }
    return true;
}

vector<int> plusVector(vector<int> v, int idx) {
    if (idx < 0) {
        stopFlag = true;
        return v;
    }
    if (v[idx] + 1 > maxValue) {
        v[idx] = 1;
        return plusVector(v, idx - 1);
    }
    if (find(v.begin(), v.end(), v[idx]+1) != v.end()) {
        v[idx]++;
        return plusVector(v, idx);
    }
    v[idx]++;
    return v;
}
