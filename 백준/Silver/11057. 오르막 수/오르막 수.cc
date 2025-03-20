#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int sum =0;
    vector<vector<long long>> arr(n+1,vector<long long>(11));
    for(int i=0;i<10;i++){
        arr[1][i]=1;
    }
    arr[1][10]=10;
    for(int i=2;i<=n;i++){
        arr[i][9] = 1;
        for(int j=8;j>=0;j--){
            arr[i][j] = arr[i][j+1]+arr[i-1][j];
            arr[i][j]%=10007;
        }
        arr[i][10] = accumulate(arr[i].begin(),arr[i].end(),0);
        arr[i][10]%=10007;
    }
    cout << arr[n][10];
}