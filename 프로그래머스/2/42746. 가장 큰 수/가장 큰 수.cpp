#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// 비교 함수를 정의합니다.
bool compare(int a, int b) {
    // 두 숫자를 문자열로 합친 후, 비교하여 큰 숫자가 앞에 오도록 합니다.
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba;
}

string solution(vector<int> numbers) {
    string answer = "";

    // numbers 벡터를 비교 함수를 사용하여 정렬합니다.
    sort(numbers.begin(), numbers.end(), compare);

    // 정렬된 숫자들을 문자열로 이어붙여서 반환합니다.
    for (int num : numbers) {
        answer += to_string(num);
    }

    // 예외 처리: 모든 숫자가 0일 경우, "0"을 반환합니다.
    if (answer[0] == '0') {
        return "0";
    }

    return answer;
}