
#include<iostream>
#include<stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> st;
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        st.push(arr[i]);
    }
    while (!st.empty()) {
        if (!answer.empty() && answer.back() == st.top()) {
            st.pop();
            continue;
        }
        else {
            answer.push_back(st.top());
            st.pop();
        }
    }
    return answer;
}