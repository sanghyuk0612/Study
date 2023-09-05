#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int len = num_list.size();
    for(int i = 0; i<len;i++){
        answer.push_back(num_list.at(i));
    }
    if(num_list.at(len-1)<=num_list.at(len-2)){
        answer.push_back(answer.at(len-1)*2);
    }
    else
        answer.push_back(answer.at(len-1)-answer.at(len-2));
    return answer;
}