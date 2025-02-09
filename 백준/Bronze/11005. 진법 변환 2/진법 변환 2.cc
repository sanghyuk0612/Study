#include <iostream>
using namespace std;

int main() {
	int n1,n2;
    cin >>n1 >>n2;
    string result;
    int tmp;
    while(n1!=0){
        tmp=n1%n2;
        if(tmp>=10){
            tmp-=10;
            tmp+='A';
            result= char(tmp)+result;
        }
        else{
            result=char(tmp+'0')+result;
        }
        n1/=n2;
    }
    cout << result;
}