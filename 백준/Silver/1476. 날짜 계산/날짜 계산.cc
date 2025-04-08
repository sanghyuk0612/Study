#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    //1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19
    int E,S,M;
    cin >> E >> S>> M;
    int n1=1,n2=1,n3=1;
    int cnt=1;
    while(n1!=E ||n2!=S||n3!=M){
        cnt++;
        n1++;
        n2++;
        n3++;
        n1%=16;
        if(n1==0){
            n1=1;
        }
        n2%=29;
        if(n2==0){
            n2=1;
        }
        n3%=20;
        if(n3==0){
            n3=1;
        }
        
    }
    cout << cnt;

}