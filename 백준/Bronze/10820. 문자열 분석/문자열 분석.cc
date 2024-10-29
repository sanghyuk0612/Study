#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    int big, small, space,num;
    char c;
    getline(cin, s);
    while (s != "") {
        
        big = 0; small = 0; space = 0;num=0;
        for (int i = 0;i < s.size();i++) {
            c = s[i];
            if (c >= 'A' && c <= 'Z')
                c = 'A';
            if (c >= 'a' && c <= 'z')
                c = 'a';
            if (c >= '0' && c <= '9')
                c = '1';
            switch (c) {
            case ' ':
                space++;
                break;
            case 'A':
                big++;
                break;
            case 'a':
                small++;
                break;
            case '1':
                num++;
                break;
            }
        }
        cout << small << " " << big << " " << num << " " << space << endl;
        getline(cin, s);
    }
    return 0;
}