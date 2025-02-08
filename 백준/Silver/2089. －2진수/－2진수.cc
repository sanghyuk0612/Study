#include<iostream>
using namespace std;
int main(void){
    int n;
    cin >>n;
    string result= "";
    while(n!=1){
        if(n>0){
            char c = n%2+'0';
            result=  c+result ;
            n/=2;
            n*=-1;
        }
        else if(n<0){
            n*=-1;
            if(n%2==0){
                result ="0"+result ;
                n/=2;
            }
            else{
                result ="1"+result;
                n/=2;
                n+=1;
            }
        }
        else{
            result="0";
            cout << "0";
            return 0;
        }
    }
    result="1"+result;
    cout << result;
}