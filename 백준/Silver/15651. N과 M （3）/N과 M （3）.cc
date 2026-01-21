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
    vector<int> temp(n2, 1);
    if (n2 == 1) {
        for (int i = 1 ; i <= n1; i++) {
            cout << i << "\n";
        }
        return 0;
    }

    while(!stopFlag) {
        if (stopFlag)
            break;
        for (int j = 0; j < temp.size(); j++) {
            cout << temp[j] << " ";
        }
        cout << "\n";
        temp = plusVector(temp, temp.size() - 1);
    }
}

vector<int> plusVector(vector<int> v, int idx) {
    if (idx < 0) {
        stopFlag = true;
        return v;
    }
    v[idx]++;
    if (v[idx] > maxValue) {
        v[idx] = 1;
        return plusVector(v, idx - 1);
    }
    return v;
}
