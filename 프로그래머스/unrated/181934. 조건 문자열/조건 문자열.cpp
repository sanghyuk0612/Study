#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (ineq.compare(">")==0){
        if(eq.compare("=")==0){
            if(n>m || n==m)
                answer = 1;
        }
        else {
            if(n>m)
                answer = 1;
        }
    }
    else{
        if(eq.compare("=")==0){
            if(n<m || n==m)
                answer = 1;
        }
        else {
            if(n<m)
                answer = 1;
        }
    }
    return answer;
}