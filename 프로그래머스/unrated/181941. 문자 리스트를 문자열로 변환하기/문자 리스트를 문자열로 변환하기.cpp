#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    int len = arr.size();
    for(int i = 0 ;i<len ; i++){
        answer +=arr[i];
    }
    return answer;
}