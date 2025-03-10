#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> input(n);
    int high = 0;
    for (int i = 0;i < n;i++) {
        cin >> input[i];
        if(input[i]>high){
            high=input[i];
        }
    }
    vector<vector<long long>> arr(high + 4, vector<long long>(3));
    arr[1][0]= 1;
    arr[2][1]= 1;
    arr[3][0]=1;
    arr[3][1]=1;
    arr[3][2]=1;
    for(int i=4;i<high+1;i++){
        arr[i][0] = (arr[i-1][1]+arr[i-1][2])% 1000000009;
        arr[i][1] = (arr[i-2][0]+arr[i-2][2])% 1000000009;
        arr[i][2] =(arr[i-3][0]+arr[i-3][1])% 1000000009;
    }
    for(int i=0;i<n;i++){
        int m = input[i];
        cout<<((arr[m][0] + arr[m][1]) % 1000000009 + arr[m][2])%1000000009<<"\n";
    }
}