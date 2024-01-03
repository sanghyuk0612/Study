#include <string>
#include <vector>
#include <iostream>
#include <functional>
#include <queue>
using namespace std;
int solution(vector<int> scoville, int K) {
    int answer = 0;
    int tmp1, tmp2, tmp3;
    priority_queue<int, vector<int>, greater<int>> Myscovil;
    for (auto iter = scoville.begin(); iter != scoville.end();iter++) {
        Myscovil.push(*iter);
    }
    while (Myscovil.size() != 1 && Myscovil.top() < K) {
        tmp1 = Myscovil.top();
        Myscovil.pop();
        tmp2 = Myscovil.top();
        Myscovil.pop();
        tmp3 = tmp1 + tmp2 * 2;
        Myscovil.push(tmp3);
        answer++;
    }
    if (Myscovil.top()<K)
        answer = -1;
    return answer;
}