#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    string s;
    cin >> s;

    string tmp = "";
    int result = 0;
    bool isMinus = false; // 마이너스 기호가 등장했는지 체크하는 플래그

    for (int i = 0; i <= s.size(); i++) {
        // 연산자이거나 문자열의 끝에 도달했을 때
        if (s[i] == '+' || s[i] == '-' || i == s.size()) {
            
            // 1. 지금까지 모은 숫자 문자열(tmp)을 정수로 변환
            int num = stoi(tmp);

            // 2. 로직 적용
            if (isMinus) {
                // 마이너스가 한 번이라도 나왔다면 무조건 뺌
                result -= num;
            } else {
                // 마이너스가 아직 안 나왔으면 더함
                result += num;
            }

            // 3. 현재 만난 기호가 마이너스라면 플래그를 true로 변경
            if (i < s.size() && s[i] == '-') {
                isMinus = true;
            }

            // 임시 문자열 초기화
            tmp = "";
        } 
        else {
            // 숫자인 경우 문자열에 추가
            tmp += s[i];
        }
    }

    cout << result;
    return 0;
}