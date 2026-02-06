#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<string, int>>> gameRoom;
    string nick;
    int lv;
    int f;
    bool breakFlag;
    for (int i = 0 ; i<n;i++) {
        cin >> lv >> nick;
        breakFlag = false;
        for (int i = 0; i<gameRoom.size(); i++) {
            if (lv>= gameRoom[i][0].second-10 && lv<= gameRoom[i][0].second+10) {
                if (m > gameRoom[i].size()) {
                    gameRoom[i].push_back({nick, lv});
                    breakFlag = true;
                    break;
                }
            }
        }
        if (breakFlag) {
            continue;
        }
        vector<pair<string,int>> temp;
        temp.push_back({nick, lv});
        gameRoom.push_back(temp);
    }
    for (int i = 0; i < gameRoom.size(); i++) {
        sort(gameRoom[i].begin(), gameRoom[i].end());
        if (gameRoom[i].size()==m) {
            cout << "Started!" << "\n";
        }
        else {
            cout << "Waiting!" << "\n";
        }
        for (int j = 0; j<gameRoom[i].size();j++) {
            cout << gameRoom[i][j].second << " " << gameRoom[i][j].first << "\n";
        }
    }
}