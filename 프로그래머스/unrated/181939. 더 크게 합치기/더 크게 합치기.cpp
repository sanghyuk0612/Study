#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string test1 ="";
    string test2 ="";
    test1+=to_string(a);
    test1+=to_string(b);
    test2+=to_string(b);
    test2+=to_string(a);
    
    if (test1 >test2)
        answer = stoi(test1);
    else
        answer = stoi(test2);
    
    return answer;
}