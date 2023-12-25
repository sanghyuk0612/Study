#include<iostream>
#include <string>
#include <vector>

using namespace std;
//개발 과정
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int pro = 0;
    while (pro<progresses.size()) {
        int i = 0;
        int cnt = 0;
        for (vector<int>::iterator iter = speeds.begin();iter != speeds.end();iter++) {
            progresses[i++] += *iter;
        }
        while (pro < progresses.size()&&progresses[pro] >= 100) {
            cnt++;
            pro++;
        }
        if (cnt != 0) {
            answer.push_back(cnt);
        }
    }
    return answer;
}