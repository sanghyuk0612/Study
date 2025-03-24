#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
    }
    vector<vector<long long>> arr(n+3,vector<long long>(3));
    arr[0][1] = input[0];
    arr[1][0] = arr[0][1];
    arr[1][2] = input[0]+input[1];
    arr[1][1] = input[1];
    for(int i=2;i<n;i++){
        int max = *max_element(arr[i-1].begin(), arr[i-1].end());
        arr[i][0] = max;
        arr[i][1] = arr[i-1][0]+input[i];
        arr[i][2] = arr[i-1][1]+input[i];
    }
    int max = *max_element(arr[n-1].begin(), arr[n-1].end());
    cout << max;
}