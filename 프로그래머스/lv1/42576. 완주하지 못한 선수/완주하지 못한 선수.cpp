#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    int len = completion.size();
    if (len !=0){
        for(int i =0 ;i<len ; i++){
            if (participant[i] != completion[i]){
                answer = participant[i];
                break;
            }
            else if (i+1 == len)
                answer = participant[len];
        }
    }
    else
        answer = participant[0];
    return answer;
}