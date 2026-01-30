#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(void) {
    string input;
    cin >> input;
    set<string> s;
    for (int i = 1 ;i<=input.size();i++) {
        for (int j=0; j<input.size(); j++) {
            if (i+j<=input.size()) {
                s.insert(input.substr(j,i));
            }
            else {
                break;
            }
        }
    }
    cout << s.size();
}