#include <iostream>
#include <vector>
using namespace std;
int calc(int num1, int num2, int sign) {
    switch (sign) {
        case 0: return num1 + num2;
        case 1: return num1 - num2;
        case 2: return num1 * num2;
        case 3:
            if (num2 == 0) return 0;
            return num1 / num2;
        default:
            return 0;
    }
}
vector<int> sign;
vector<int> num;
vector<bool> visited;
int maxV;
int minV;
void back(int v, int depth, int result) {
    visited[v] = true;
    result = calc(result, num[depth],sign[v]);
    if (depth == num.size()-1) {
        if (maxV < result) {
            maxV = result;
        }
        if (minV > result) {
            minV = result;
        }
    }
    for(int i = 0;i<sign.size();i++) {
        if (!visited[i]) {
            back(i, depth+1, result);
        }
    }
    visited[v] = false;
}
int main(void) {
    int n;
    cin >> n;
    num = vector<int>(n);
    minV = 1000000001;
    maxV = -1000000001;

    for (int i =0;i <n;i++) {
        cin >> num[i];
    }
    vector<int> input(4);
    for (int i = 0 ; i<4;i++) {
        // +, -, *, /
        cin >> input[i];
    }
    for (int i = 0; i <4; i++) {
        while (input[i]!=0) {
            sign.push_back(i);
            visited.push_back(false);
            input[i]--;
        }
    }
    for (int i = 0 ;i<sign.size();i++) {
        back(i, 1, num[0]);
    }
    cout << maxV << "\n" << minV;
}
