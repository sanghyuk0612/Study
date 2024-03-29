#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//A~Z = 65~90
int transfer(char a,int n){
    a+=n;
    if(a==91){
        a=65;
    }
    else if(a==64){
        a=90;
    }
    return a;
}
int min(int a,int b){
    if (a<b){
        return a;
    }
    else
        return b;
}
int solution(string name) {
    int answer = 0;
    string temp ="";
    for (int i=0;i<name.size();i++){
        temp+="A";
    }
    //기준점 N 앞으로가든 뒤로가든 13번걸림.
    int cnt =0;
    cout << temp <<endl;
    int cur =0;
    int turn = name.size()-1;
    //int turn = name.size() - 1; //조이스틱을 한 방향으로 쭉 움직였을 때
    int total=0;
    while(cur<name.size()){
        while(temp[cur]!=name[cur]){
            if(name[cur]>78){
                cnt++;
                temp[cur]= transfer(temp[cur],-1);
            }
            else{
                cnt++;
                temp[cur] = transfer(temp[cur],+1);
            }
        }
        cur++;
    }
    for (int i = 0; i < name.size(); i++) {
        int ind = i + 1;
        while (ind < name.size() && name[ind] == 'A') ind++;
        turn = min(turn, i + name.size() - ind + min(i, name.size() - ind));
    }
    cnt+=turn;
    cout << cnt <<endl;
    answer = cnt;
    return answer;
}