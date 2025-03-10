#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> arr(n+1, vector<int>(10));
    for(int i=1;i<10;i++){
        arr[1][i]=1;
    }
    arr[1][0]=0;

    for(int i=2;i<=n;i++){
        for(int j=1;j<9;j++){
            arr[i][j]=((arr[i-1][j-1]+arr[i-1][j+1])%1000000000);
        }
        arr[i][0] = arr[i-1][1];
        arr[i][9]= arr[i-1][8];
    }
    long long result=0;
    for(int i=0;i<10;i++){
        result +=(arr[n][i]);
    }
    cout << result%1000000000<<endl;
}