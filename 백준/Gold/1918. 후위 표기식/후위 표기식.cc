#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    int i = 0;
    char c;
    string result="";
    while (i < s.size()) {
        c = s[i];
        switch (c) {
        case '+': case'-':
            if (st.empty()) {
                st.push(c);
                i++;
                break;
            }
            if (st.top() == '(') {
                st.push(s[i]);
                i++;
                break;
            }
            while(!st.empty() && st.top()!='('){
                result +=st.top();
                st.pop();
            }
            st.push(c);
            i++;
            break;
        case '*': case '/':
            if (st.empty()) {
                st.push(c);
                i++;
                break;
            }
            if (st.top() == '(' || st.top() == '+' || st.top() == '-') {
                st.push(c);
                i++;
                break;
            }
            while (!st.empty() &&st.top() != '(' && st.top() != '+' && st.top() != '-') {
                result += st.top();
                st.pop();
            }
            st.push(c);
            i++;
            break;
        case '(':
            st.push(c);
            i++;
            break;
        case ')':
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
            i++;
            break;
        default:

            result += c;
            i++;
        }
        
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout << result;
    return 0;
}