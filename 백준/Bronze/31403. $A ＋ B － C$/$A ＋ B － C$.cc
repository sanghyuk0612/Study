#include <iostream>
using namespace std;

int main(void) {
    int n1, n2, n3;
    cin >>n1 >> n2>> n3;
    cout << n1+n2-n3<<"\n";
    string s =to_string(n1)+to_string(n2);
    cout << stoi(s)-n3;
}