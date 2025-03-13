#include <iostream>
#include <vector>
#include<algorithm>
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
    vector<int> path(n,-1);

    int high = 1;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((cnt[i]<cnt[j]+1)&&input[i]<input[j]){
                    cnt[i]=cnt[j]+1;
                    path[i]=j;
                    if(high<cnt[i]){
                        high = cnt[i];
                        
                    }
                }
            }
        }
    }
    cout <<high<<"\n";
    
    int start = find(cnt.begin(),cnt.end(),high)-cnt.begin();
    while(start!=-1){
        cout<< input[start]<< " ";
        start = path[start];
    }
    
}