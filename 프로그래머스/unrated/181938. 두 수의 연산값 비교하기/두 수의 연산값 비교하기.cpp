#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string test1 = to_string(a);
    test1 +=to_string(b);
    int test2 = 2*a*b;
    if (stoi(test1) > test2)
        answer = stoi(test1);
    else
        answer = test2;
    return answer;
}