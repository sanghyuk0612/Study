#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> input(n + 1);
    vector<int> result(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> input[i];
    }

    stack<int> st;

    for (int i = 1; i <= n; i++) {
        while (!st.empty() && input[st.top()] < input[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top();
        } else {
            result[i] = 0;
        }

        st.push(i);
    }

    for (int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
}
