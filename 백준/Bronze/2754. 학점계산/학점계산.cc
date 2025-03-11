#include <iostream>
using namespace std;

int main(void) {
    string s;
    cin >>s;
    char c;
    c = s[0];
    switch(c){
        case 'A':
        if(s[1]=='+'){
            cout<<"4.3";
        }
        else if(s[1]=='0'){
            cout<<"4.0";
        }
        else{
            cout<<"3.7";
        }
        break;
        case 'B':
        if(s[1]=='+'){
            cout<<"3.3";
        }
        else if(s[1]=='0'){
            cout<<"3.0";
        }
        else{
            cout<<"2.7";
        }
        break;
        case 'C':
        if(s[1]=='+'){
            cout<<"2.3";
        }
        else if(s[1]=='0'){
            cout<<"2.0";
        }
        else{
            cout<<"1.7";
        }
        break;
        case 'D':
        if(s[1]=='+'){
            cout<<"1.3";
        }
        else if(s[1]=='0'){
            cout<<"1.0";
        }
        else{
            cout<<"0.7";
        }
        break;
        default:
        cout<<"0.0";
    }
}