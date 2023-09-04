#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int even=0;
    int odd=0;
    for(int i = 0 ;i<num_list.size();i++){
        if(num_list.at(i)%2 ==0)
            even =even*10+ num_list.at(i);
        else
            odd =odd*10+ num_list.at(i);
    }
    answer = odd+even;
    return answer;
    
}