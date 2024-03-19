#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    n-=lost.size(); //3
    int index;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int i=0;i<lost.size();i++){
        if(find(reserve.begin(),reserve.end(),lost[i])!=reserve.end()){
            n++;
            index = find(reserve.begin(),reserve.end(),lost[i])-reserve.begin();
            reserve.erase(reserve.begin()+index);
            index = find(lost.begin(),lost.end(),lost[i])-lost.begin();
            lost.erase(lost.begin()+index);
            i--;
        }
    }
    for(int i=0;i<lost.size();i++){
        if(find(reserve.begin(),reserve.end(),lost[i]-1)!=reserve.end()){
            n++;
            index = find(reserve.begin(),reserve.end(),lost[i]-1)-reserve.begin();
            reserve.erase(reserve.begin()+index);
        }
        else if(find(reserve.begin(),reserve.end(),lost[i]+1)!=reserve.end()){
            n++;
            index = find(reserve.begin(),reserve.end(),lost[i]+1)-reserve.begin();
            reserve.erase(reserve.begin()+index);
        }
        
    }
    answer =n;
    return answer;
}