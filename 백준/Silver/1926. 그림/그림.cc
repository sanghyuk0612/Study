#include<iostream>
#include<vector>

using namespace std;
vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}};
vector<vector<int>> picture;
void dfs(int n, int m);
int sizeValue;
int main(void) {
    int n, m;
    cin >> n >> m;
    picture = vector<vector<int>>(n,vector<int>(m));
    int cnt = 0;
    int maxsizeValue = 0;
    for (int i = 0 ;i<n;i++) {
        for (int j =0; j < m;j++) {
            cin >> picture[i][j];
        }
    }
    for (int i = 0 ;i<n;i++) {
        for (int j =0; j<m;j++) {
            if (picture[i][j]==1) {
                sizeValue = 0;
                cnt++;
                dfs(i, j);
                if (sizeValue > maxsizeValue) {
                    maxsizeValue = sizeValue;
                }
            }
        }
    }
    cout << cnt << "\n" << maxsizeValue;
}
void dfs(int n, int m) {
    int nextX, nextY;
    sizeValue++;
    picture[n][m] = 0;
    for (int i = 0; i < 4;i++) {
        nextX = m+direction[i].first;
        nextY = n+direction[i].second;
        if (nextX >= 0 && nextX < picture[0].size() && nextY >= 0 && nextY < picture.size()) {
            if (picture[nextY][nextX]==1) {
                dfs(nextY, nextX);
            }
        }
    }
}