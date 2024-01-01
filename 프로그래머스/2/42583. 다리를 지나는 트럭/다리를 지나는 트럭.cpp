#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <array>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int time = 0;
    stack<int> remain;
    int sum=0;
    int *bridge =new int[bridge_length];

    int check =truck_weights.size();
    int finish = 0;
    for (int i = 0;i < bridge_length;i++) {
        bridge[i] = 0;
    }
    reverse(truck_weights.begin(), truck_weights.end());
    for (int i = 0;i < truck_weights.size();i++) {
        remain.push(truck_weights[i]);
    }
    while (check!= finish) {
        
        for (int i = bridge_length-1;i-1 >=0;i--) {
            if (i == bridge_length - 1) {
                if (bridge[i] != 0) {
                    sum -= bridge[i];
                    finish++;
                }
            }
            bridge[i] = bridge[i - 1];
        }
        if (remain.empty()||sum + remain.top() > weight) {
            time++;
            bridge[0] = 0;
            continue;
        }
        
        bridge[0] = remain.top();
        sum += bridge[0];
        remain.pop();
        time++;
    }
    answer = time;
    return answer;
}