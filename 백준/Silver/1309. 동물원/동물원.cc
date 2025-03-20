#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> arr(n+1,vector<int>(4));
    arr[1][0] = 1;
    arr[1][1] = 1;
    arr[1][2] = 0;
    arr[1][3] = 2;
    for(int i=2;i<=n;i++){
        arr[i][0]= arr[i-1][1]+arr[i-1][2]+1;
        arr[i][1]= arr[i-1][0]+arr[i-1][2]+1;
        arr[i][2]= arr[i-1][3];
        arr[i][3]= arr[i][0]+arr[i][1]+arr[i][2];
        arr[i][0]%=9901;
        arr[i][1]%=9901;
        arr[i][2]%=9901;
        arr[i][3]%=9901;
    }
    cout<<arr[n][3]+1;
}