#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score={0,0,0};
    vector<int> P1_answers ={1,2,3,4,5};
    vector<int> P2_answers = {2,1,2,3,2,4,2,5};
    vector<int> P3_answers = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i<answers.size();i++){
        if(answers[i]==P1_answers[i%P1_answers.size()]){
            score[0]+=1;
        }
        if(answers[i]==P2_answers[i%P2_answers.size()]){
            score[1]+=1;
        }
        if(answers[i]==P3_answers[i%P3_answers.size()]){
            score[2]+=1;
        }
    }
    
    int max_index = max_element(score.begin(), score.end()) - score.begin();
    answer.push_back(max_index+1);
    if(max_index!=2){
        for(int i =max_index+1;i<3;i++){
            if(score[max_index]==score[i]){
                answer.push_back(i+1);
            }
        }
    }
    return answer;
}