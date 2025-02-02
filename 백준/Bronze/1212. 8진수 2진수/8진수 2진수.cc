#include<iostream>
using namespace std;
int main(void){
    string num;
    cin >> num;
    if(num=="0"){
        cout << 0;
        return 0;
    }
    int n=0;
    for(int i=0;i<num.size();i++){
        n = num[i]-'0';
        if(i==0&& n/4==0){
            if(n/2==0){
                cout << 1;
                continue;
            }
            cout << n/2;
            n%=2;
            cout << n;
        }
        else{
            cout << n/4;
        n%=4;
        cout << n/2;
        n%=2;
        cout << n;
        }
        
    }
}