#include <iostream>
#include <string>
#include <set>
#include <cmath>

using namespace std;

set<int> numberSet;

bool isPrime(int number)
{
    // 1. 0과 1은 소수가 아니다 (소수의 정의)
    if (number == 0 || number == 1)
        return false;

    // 2. 에라토스테네스의 체
    int lim = sqrt(number);
    for (int i = 2; i <= lim; i++)
        if (number % i == 0)
            return false;

    return true;
}

void makeCombination(string comb, string others)
{
    // 1. 현 조합을 numberSet에 추가한다.
    if (comb != "")
        numberSet.insert(stoi(comb));

    // 2. 현 조합 + others[i]를 조합하여 새로운 조합을 만든다.
    for (int i = 0; i < others.size(); i++)
        makeCombination(comb + others[i], others.substr(0, i) + others.substr(i + 1));
}

int solution(string numbers)
{
    // 1. 모든 숫자 조합을 만든다
    makeCombination("", numbers);

    // 2. 소수의 개수를 센다
    int answer = 0;
    for (int number : numberSet)
        if (isPrime(number))
            answer++;

    // 3. 소수의 개수를 반환한다.
    return answer;
}
