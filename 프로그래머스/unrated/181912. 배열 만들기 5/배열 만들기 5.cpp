#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    int num;
    for (int i = 0 ;i<intStrs.size();i++){
        num = stoi(intStrs[i].substr(s, l));
        if (num>k)
            answer.push_back(num);
    }
    return answer;
}