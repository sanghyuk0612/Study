#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gettingGCD(int a, int b){
    int t;
    while (b) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main(void){
    int n =0,m;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> m;
        vector<int> vec(m);
        long result=0;
        sort(vec.begin(),vec.end());
        for(int j=0;j<m;j++){
            cin>>vec[j];
        }
        
        for(int n1 = 0; n1<m-1;n1++){
            for(int n2=n1+1; n2<m;n2++){
                result+=gettingGCD(vec[n1],vec[n2]);
            }
        }
        cout << result << "\n";
    }
}