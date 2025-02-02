#include<iostream>
using namespace std;
int main(void){
    string num;
    cin >> num;
    while(num.size()%3!=0){
        if(num.size()%3==1){
            num = "00"+num;
        }
        else
            num = '0'+num;
    }
    string result;
    int temp=0;
    for(int i=0; i<num.size();i+=3){
        temp = (num[i]-'0')*4;
        temp+=(num[i+1]-'0')*2;
        temp+=(num[i+2]-'0')*1;
        cout <<temp;
    }
}