#include <iostream>
using namespace std;

long long count_num(long long n, long long k) {
    long long result = 0;
    long long temp = k;

    while (n >= temp) { // n을 기준으로 temp(k의 거듭제곱)로 나누어 개수 누적
        result += n / temp;
        temp *= k;
    }
    return result;
}

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;
    long long two = count_num(n1, 2) - count_num(n2, 2) - count_num(n1 - n2, 2);
    long long five = count_num(n1, 5) - count_num(n2, 5) - count_num(n1 - n2, 5);

    cout << min(two, five); // 둘 중 최소값이 끝자리 0의 개수
}
