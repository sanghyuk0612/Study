#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int min;
    for(int i = 0 ; i<queries.size();i++){
        min = 9999999;
        for(int j = queries[i][0] ; j <= queries[i][1];j++){
            if (arr[j] > queries[i][2])
                if(arr[j]<min)
                    min = arr[j];
        }
        if (min == 9999999)
            min = -1;
        answer.push_back(min);
    }
    return answer;
}