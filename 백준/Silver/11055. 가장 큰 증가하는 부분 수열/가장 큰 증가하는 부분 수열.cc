#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    vector<long> sum(n, 0);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
        sum[i]=input[i];
    }
    
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if((sum[i]<sum[j]+input[i])&&input[i]<input[j]){
                    sum[i]=sum[j]+input[i];
                }
            }
        }
    
    int max = *max_element(sum.begin(), sum.end());
    cout << max;
}


