#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector <int> result(26,0);
    for (int i = 0;i < s.size();i++) {
        result[s[i] - 'a']++;
    }

    for (int i = 0;i < 26; i++) {
        cout << result[i] << " ";
    }
    return 0;
}