#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    arr[1]= 1;
    arr[2]= 3;
    for(int i=3;i<n+1;i++){
        arr[i]=(arr[i-1]+arr[i-2]*2)%10007;
    }
    cout << arr[n];
}