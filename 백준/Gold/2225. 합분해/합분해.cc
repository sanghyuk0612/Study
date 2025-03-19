#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    long n1, n2;
    cin >> n1 >> n2;
    vector<vector<long>> arr(n1+2,vector<long>(n2+2));
    for(int i=1;i<=n2;i++){
        arr[0][i]= 1;
    }
    for(int i=1;i<=n1;i++){
        arr[i][1]= 1;
    }
    for(int i=1;i<=n1;i++){
        arr[i][2]= (i+1)%1000000000;
    }
    for(int i=3;i<=n2;i++){
        for(int j=1;j<=n1;j++){
            arr[j][i] = arr[j-1][i]+arr[j][i-1];
            arr[j][i]%=1000000000;
        }
    }
    cout << arr[n1][n2];
}