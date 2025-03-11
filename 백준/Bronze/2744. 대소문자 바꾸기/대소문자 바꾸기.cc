#include <iostream>
using namespace std;

int main(void) {
    string s;
    cin >>s;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if(c>='A'&&c<='Z'){
            c-='A';
            c+='a';
        }
        else{
            c-='a';
            c+='A';
        }
        s[i]=c;
    }
    cout << s;
}