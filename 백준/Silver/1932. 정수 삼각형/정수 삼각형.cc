#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> input(n,vector<int>(n));
    vector<vector<int>> arr(n,vector<int>(n));
    for (int i = 0;i < n;i++) {
        for(int j=0;j<i+1;j++){
            cin >> input[i][j];
        }
    }
    arr[0][0] = input[0][0];
    for(int i=1;i<n;i++){
        arr[i][0] = arr[i-1][0]+input[i][0];
        arr[i][i] = arr[i-1][i-1]+input[i][i];
        for(int j=1;j<i;j++){
            if(arr[i-1][j-1]+input[i][j]<arr[i-1][j]+input[i][j]){
                arr[i][j] = arr[i-1][j]+input[i][j];
            }
            else{
                arr[i][j] = arr[i-1][j-1]+input[i][j];
            }
        }
    }
    int max = *max_element(arr[n-1].begin(), arr[n-1].end());
    cout << max;

}