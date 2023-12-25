#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> order;
    vector<int> great = priorities;
    sort(great.begin(), great.end(),greater<int>());
    int inx=0;
    int j = 0;
    while(order.size() != priorities.size()) {
        if (j >= priorities.size()) {
            j = 0;
        }
        if (priorities[j] == great[inx]) {
            order.push_back(j);
            inx++;
        }
        j++;
    }
    answer = find(order.begin(), order.end(), location)-order.begin()+1;
    return answer;
}