#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<bool> visit;
vector<char> input;
vector<char> result;
set<char> V = {'a','e','i','o','u'};
void back(int depth, int idx) {
    visit[idx] = true;
    result[depth] = input[idx];
    if (depth == result.size()-1) {
        int cntV =0;
        int cntC =0;
        for (int i = 0 ; i<result.size();i++) {
            if (V.find(result[i]) == V.end()) {
                cntC++;
            }
            else {
                cntV++;
            }
        }
        if (cntC>=2 && cntV>=1) {
            for (int i = 0 ; i<result.size();i++) {
                cout << result[i];
            }
            cout << "\n";
        }
    }
    else {
        for (int i = idx+1; i<input.size(); i++) {
            if (!visit[i]) {
                back(depth+1, i);
            }
        }
    }
    visit[idx] = false;
}

int main(void) {
    int l, c;
    cin >> l >> c;
    input;
    result = vector<char>(l);
    char tmp;
    for (int i = 0; i < c;i++) {
        cin >> tmp;
        input.push_back(tmp);
        visit.push_back(false);
    }
    sort(input.begin(),input.end());
    for (int i = 0; i <input.size();i++) {
        back(0, i);
    }
}