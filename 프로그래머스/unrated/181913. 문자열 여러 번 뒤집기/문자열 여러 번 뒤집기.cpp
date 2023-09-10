#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    cout<<answer<<endl;
    
    for(int i =0;i<queries.size();i++){
        int k = queries[i][0];
        int l=queries[i][1];
        while (k<=l){
            answer[k] = my_string[l];
            answer[l] = my_string[k];
            k++;l--;
            my_string = answer;
            
        }
    }
    return answer;
}