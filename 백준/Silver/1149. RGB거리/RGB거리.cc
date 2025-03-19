#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> input(n,vector<int>(3));
    vector<vector<int>> arr(n,vector<int>(3));
    for(int i=0;i<n;i++){
        cin >> input[i][0];
        cin >> input[i][1];
        cin >> input[i][2];
    }
    arr[0][0] = input[0][0];
    arr[0][1] = input[0][1];
    arr[0][2] = input[0][2];
    for(int i=1;i<n;i++){
        int tmp1, tmp2;
        tmp1 = arr[i-1][1]+input[i][0];
        tmp2 = arr[i-1][2]+input[i][0];
        if(tmp1>tmp2){
            arr[i][0] = tmp2;
        }
        else{
            arr[i][0] = tmp1;
        }
        tmp1 = arr[i-1][0]+input[i][1];
        tmp2 = arr[i-1][2]+input[i][1];
        if(tmp1>tmp2){
            arr[i][1] = tmp2;
        }
        else{
            arr[i][1] = tmp1;
        }
        tmp1 = arr[i-1][0]+input[i][2];
        tmp2 = arr[i-1][1]+input[i][2];
        if(tmp1>tmp2){
            arr[i][2] = tmp2;
        }
        else{
            arr[i][2] = tmp1;
        }
    }
    int min = *min_element(arr[n-1].begin(), arr[n-1].end());
    cout << min;
    
}