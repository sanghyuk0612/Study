#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long> arr(n);
    vector<int> input(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        input[i]=arr[i];
    }
    vector<long> cnt(n, 1);
    int high = 1;
    // for (int i = 1;i < n;i++) {
    //     for (int j = 0;j < i;j++) {
    //         if (arr[j] < arr[i]) {
    //             arr[j] = arr[i];
    //             cnt[j]++;
    //             if (high < cnt[j]) {
    //                 high = cnt[j];
    //             }
    //         }
    //     }
    // }
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((cnt[i]<cnt[j]+1)&&input[i]<input[j]){
                cnt[i]=cnt[j]+1;
                if(high<cnt[i]){
                    high = cnt[i];
                }
            }
        }
    }
}
    cout <<high;
}