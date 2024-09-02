#include<iostream>
using namespace std;
int main(void){
    int a,b;
    cin >> a;
    cin >> b;
    int b1,b2,b3;
    b1 = b%10;
    b2 = (b%100-b1)/10;
    b3 = b/100;
    
    cout << a*b1 <<endl;
    cout << a*b2 <<endl;
    cout << a*b3 <<endl;
    cout << a*b << endl;
}