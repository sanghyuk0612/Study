#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long> input(n);
    int high=0;
    for(int i=0;i<n;i++){
        cin >>input[i];
        if(high<input[i]){
            high = input[i];
        }
    }
    vector<long> arr(high+1);
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i=4;i<high+1;i++){
        arr[i]= arr[i-1]+arr[i-2]+arr[i-3];
        arr[i] %= 1000000009;
    }
    for(int i=0;i<n;i++){
        cout << arr[input[i]] << endl;
    }
}