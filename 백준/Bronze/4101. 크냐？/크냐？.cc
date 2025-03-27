#include <iostream>
using namespace std;

int main(void) {
    int n1, n2;
    cin >> n1 >> n2;
    while((n1!=0)&&(n2!=0)){
        if(n1>n2){
            cout<< "Yes\n";
        }
        else{
            cout<< "No\n";
        }
        cin >> n1 >> n2;

    }
    
}