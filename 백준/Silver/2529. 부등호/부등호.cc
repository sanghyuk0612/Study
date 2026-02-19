#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> visit;
vector<char> input;
pair<string, string> result = {"0000000000","9999999999"};
vector<char> temp;
void back(int depth, int v) {
    visit[v] = true;
    temp[depth] = v + '0';
    if (depth == temp.size()-1) {
        string tmp = "";
        for (int i = 0; i<temp.size();i++) {
            tmp+=temp[i];
        }
        if (tmp>result.first) {
            result.first = tmp;
        }
        if (tmp<result.second) {
            result.second = tmp;
        }
        visit[v] = false;
        return;
    }
    if (input[depth] == '<') {
        for (int i = v+1; i < 10; i++) {
            if (!visit[i]) {
                back(depth+1, i);
            }
        }
    }
    else {
        for (int i = v-1; i >=0; i--) {
            if (!visit[i]) {
                back(depth+1, i);
            }
        }
    }
    visit[v] = false;
}

int main (void) {
    int n;
    cin >> n;
    visit.resize(10);
    input.resize(n,false);
    temp.resize(n+1);
    for (int i = 0; i < n;i++) {
        cin >> input[i];
    }
    for (int i = 0; i < 10; i++) {
        back(0, i);
    }
    cout << result.first << "\n" << result.second;
}