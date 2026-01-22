#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main(void) {
    string str;
    getline(cin, str);
    vector<string> result;

    string temp = "";
    stack<char> etc;
    for (int i = 0;i <str.size();i++) {
        while (result.empty()) {
            if (str[i] == ' ') {
                result.push_back(temp);
                temp = "";
            }
            else {
                temp+=str[i];
            }
            i++;
        }

        while (str[i] != ',' && str[i] != ';' && str[i] != ' ') {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                temp += str[i];
            }
            else {
                etc.push(str[i]);
            }
            i++;
        }
        if (str[i] == ' ') {
            continue;
        }
        cout << result[0];
        while (!etc.empty()) {
            if (etc.top() == '[') {
                etc.pop();
                continue;
            }
            if (etc.top() == ']') {
                etc.pop();
                cout << "[]";
            }
            else {
                cout << etc.top();
                etc.pop();
            }
        }
        cout << " " << temp << ";\n";
        temp = "";
    }
    return 0;
}