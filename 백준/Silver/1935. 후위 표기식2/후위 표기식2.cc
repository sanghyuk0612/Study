#include <iostream>
#include <iomanip>  // setprecision을 위해 추가
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<double> alpha;
    stack<double> st;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        alpha.push_back(tmp);
    }

    int i = 0;
    char c;
    double op1, op2;
    while (i < s.size()) {
        c = s[i];
        if (c >= 'A' && c <= 'Z') {
            st.push(alpha[c - 'A']);
            i++;
            continue;
        }
        switch (c) {
        case '+':
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
            st.push(op2 + op1);
            i++;
            break;
        case '-':
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
            st.push(op2 - op1);
            i++;
            break;
        case '*':
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
            st.push(op2 * op1);
            i++;
            break;
        case '/':
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
            st.push(op2 / op1);
            i++;
            break;
        }
    }

    // 소수 둘째 자리까지 출력
    cout << fixed << setprecision(2) << st.top();
    return 0;
}