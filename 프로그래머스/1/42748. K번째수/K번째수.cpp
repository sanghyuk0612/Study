#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size();i++) {
        vector<int> slice(array.begin() + commands[i][0]-1, array.begin() + commands[i][1]);
        sort(slice.begin(), slice.end());
        answer.push_back(slice[commands[i][2]-1]);
    }
    return answer;
}