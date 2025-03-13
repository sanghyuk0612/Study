#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> input(n);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
    }
    int high = input[0];
    arr[0]=input[0];
    for(int i=1;i<n;i++){
        if(arr[i-1]+input[i]>input[i]){
            arr[i]= arr[i-1]+input[i];
        }
        else{
            arr[i]= input[i];
        }
        if(high<arr[i]){
            high= arr[i];
        }
    }
    cout << high;
}