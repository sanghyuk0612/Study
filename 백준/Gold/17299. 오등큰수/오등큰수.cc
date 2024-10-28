#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> vec(n), result(n, -1);
    unordered_map<int, int> freq;

    // 빈도수를 미리 계산하여 map에 저장
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        freq[vec[i]]++;
    }

    stack<int> st;
    for (int i = 0; i < n; i++) {
        // 스택 top에 있는 인덱스의 빈도보다 현재 요소의 빈도가 높을 때까지 pop하고 결과 갱신
        while (!st.empty() && freq[vec[st.top()]] < freq[vec[i]]) {
            result[st.top()] = vec[i];
            st.pop();
        }
        st.push(i);
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}