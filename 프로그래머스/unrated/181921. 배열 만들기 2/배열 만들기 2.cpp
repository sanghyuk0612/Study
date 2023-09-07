#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string tmp;
    for (int i = l; i<=r; i){
        tmp = to_string(i);
        for(int j = 0; j<tmp.size();j++){
            if (tmp[j]!='5' &&tmp[j] !='0')
                break;
            if(j==tmp.size()-1)
                answer.push_back(i);
        }
        if ( i% 5 ==0){
            i+=5;
        }
        else
            i++;
    }
    if (answer.size() == 0 )
        answer.push_back(-1);
    return answer;
}