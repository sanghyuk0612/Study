#include<iostream>
using namespace std;
int main(void){
    long n1,n2;
    cin >>n1 >>n2;
    n1= n1-n2;
    if(n1<0){
        n1=-1*n1;
    }
    cout<<n1;
}