#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string number) {
    int answer = 0;
    for (int i = 0; i<number.size();i++){
        answer += number[i]-'0';
    }
    answer%=9;
    return answer;
}