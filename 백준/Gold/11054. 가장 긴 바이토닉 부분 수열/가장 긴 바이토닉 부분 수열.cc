#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n);
    vector<long> up_cnt(n, 1);
    vector<long> dn_cnt(n, 1);
    vector<int> up_path(n, -1);
    vector<int> dn_left(n,1);
    vector<int> end(n, 0);
    for (int i = 0;i < n;i++) {
        cin >> input[i];
    }
    int high = 0;
    for (int i = n - 1;i >= 0;i--) {
        for (int j = i + 1;j < n;j++) {
            if ((up_cnt[i] < up_cnt[j] + 1) && input[i] < input[j]) {
                up_cnt[i] = up_cnt[j] + 1;
                up_path[i] = j;
            }
            if ((dn_cnt[i] < dn_cnt[j] + 1) && input[i] > input[j]) {
                dn_cnt[i] = dn_cnt[j] + 1;
            }
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = i-1;j >= 0;j--) {
            if((dn_left[i]<dn_left[j]+1)&&input[i]>input[j]){
                dn_left[i] = dn_left[j]+1;
            }
        }
    }
    int hi =0;
    for(int i=0;i<n;i++){
        if(dn_left[i]+dn_cnt[i]>hi){
            hi = dn_left[i]+dn_cnt[i]-1;
        }
    }
    cout << hi;
}

/*
5
1 5 4 2 3
ans: 4 
*/
