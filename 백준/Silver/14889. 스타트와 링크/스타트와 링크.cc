#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> mat;
vector<bool> visit;
int minV = 99999;
void back(int depth, int v) {
    visit[v] = true;
    if (depth == visit.size()/2-1) {
        int team1 = 0, team2 = 0;
        vector<int> member1, member2;
        for (int i = 0;i <visit.size();i++) {
            if (visit[i]) {
                member1.push_back(i);
            }
            else {
                member2.push_back(i);
            }
        }
        for (int i = 0;i<member1.size();i++) {
            for (int j = i+1; j<member1.size();j++) {
                team1 += mat[member1[i]][member1[j]];
                team1 += mat[member1[j]][member1[i]];
            }
        }
        for (int i = 0;i<member2.size();i++) {
            for (int j = i+1; j<member2.size();j++) {
                team2 += mat[member2[i]][member2[j]];
                team2 += mat[member2[j]][member2[i]];
            }
        }
        int result = abs(team1-team2);
        if (minV > result) {
            minV = result;
        }
    }
    for (int i = 0; i<visit.size(); i++) {
        if (!visit[i] && v < i) {
            back(depth +1, i);
        }
    }
    visit[v] = false;
}
int main (void) {
    int n;
    cin >> n;
    mat.resize(n,vector<int>(n));
    visit.resize(n,false);
    for (int i = 0; i < n;i++) {
        for (int j = 0 ; j<n;j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i <n;i++) {
        back(0, i);
    }
    cout << minV;
}