#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<long>> arr(n+1,vector<long>(2));
    arr[1][0]=0;
    arr[1][1]=1;
    for(int i=2;i<n+1;i++){
        arr[i][0] = arr[i-1][0]+arr[i-1][1];
        arr[i][1]= arr[i-1][0];
    }
    cout << arr[n][0]+arr[n][1];
}