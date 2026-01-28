#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr;
void back(int depth, int idx);
vector<bool> selected;
vector<int> result;
int maxValue;
int main(void) {
    int n;
    cin >> n;
    arr = vector<int>(n);
    result = vector<int>(n);
    selected = vector<bool>(n,false);
    for (int i = 0 ;i < n;i++) {
        cin >> arr[i];
    }
    maxValue = -999;
    for (int i = 0; i<n; i++) {
        back(0, i);
    }
    cout << maxValue;
}

void back(int depth,int idx) {
    selected[idx] = true;
    result[depth] = arr[idx];
    if (depth != arr.size()-1) {
        int maxIdx = -1;
        int maxValue = -999;
        for (int i = 0; i<arr.size(); i++) {
            if (!selected[i]) {
                if ( maxValue<abs(arr[idx] - arr[i])) {
                    maxIdx = i;
                    maxValue = abs(arr[idx] - arr[i]);
                }
            }
        }
        back(depth+1, maxIdx);
    }
    else {
        int tmp = 0;
        for (int i = 1; i< result.size();i++) {
            tmp += abs(result[i-1]-result[i]);
        }
        if (maxValue < tmp) {
            maxValue = tmp;
        }
    }
    selected[idx] = false;
    result[depth] = 0;
}
