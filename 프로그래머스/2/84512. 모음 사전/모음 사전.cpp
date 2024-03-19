#include<iostream>
#include <string>
#include <vector>
#include<cmath>
using namespace std;
//word의 길이는 1 이상 5 이하입니다.
//word는 알파벳 대문자 'A', 'E', 'I', 'O', 'U'로만 이루어져 있습니다.
int solution(string word) {
    int answer = 0;
        // 종 문자열 길이 
        int length = word.length();
        // 종류의 수
        int numberOfWords = 5;
        // 경우의 수 총합 
        int max = 0;
        for(int i = 1; i <= numberOfWords; i++) {
            max += pow(numberOfWords, i);
        }
        //  ['A', 'E', 'I', 'O', 'U'] 순서 [0, 1, 2, 3, 4]
        for (int i = 1; i <= length; i++) {
            if (word[i-1] == 'A') {
                answer += 1;
            } else if (word[i-1] == 'E') {
                answer += ((max / pow(numberOfWords, i)) * 1) + 1;
            } else if (word[i-1] == 'I') {
                answer += ((max / pow(numberOfWords, i)) * 2) + 1;
            } else if (word[i-1] == 'O') {
                answer += ((max / pow(numberOfWords, i)) * 3) + 1;
            } else {
                answer += ((max / pow(numberOfWords, i)) * 4) + 1;
            }
        }

        return answer;
}