#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int c;
    for (int i = 0;i < s.size();i++) {
        c = s[i];
        if (c >= 'a' && c <= 'z') {
            c += 13;
            if (c > 'z') {
                c -= 26;
            }
        }
        if (c >= 'A' && c <= 'Z') {
            c += 13;
            if (c > 'Z') {
                c -= 26;
            }
        }
        s[i] = c;
    }
    cout << s;
    return 0;
}