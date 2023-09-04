#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 0;
    int multi = 1;
    for(int i = 0 ; i<num_list.size();i++){
        sum +=num_list.at(i);
        multi *= num_list.at(i);
    }
    cout << sum << endl << multi;
    if(sum*sum>multi)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}