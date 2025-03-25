#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    vector<long> cnt(n, 1);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
        
    }
    
    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if((cnt[i]<cnt[j]+1)&&input[i]>input[j]){
                cnt[i]=cnt[j]+1;
            }
        }
    }
    
    int max = *max_element(cnt.begin(), cnt.end());
    cout << max;
}


