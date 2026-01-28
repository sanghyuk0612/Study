#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const pair<int,int> direction[4] = {{0,1},{0,-1},{1,0},{-1,0}};
pair<int,int> operator+(const pair<int,int>& a, const pair<int,int>& b) {
    return {a.first + b.first, a.second + b.second};
}
vector<pair<int,int>> input;
vector<vector<int>> farm;
void dfs(pair<int,int> locate);
int width;
int height;
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n;i++) {
        int v;
        cin >> width >> height >> v;
        farm = vector<vector<int>>(width, vector<int>(height, 0));
        input = vector<pair<int,int>>(v);
        int cnt = 0;

        for (int j=0; j<v; j++) {
            int tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            input[j] = make_pair(tmp1, tmp2);
            farm[tmp1][tmp2] = 1;
        }
        while(input.size() != 0) {
            dfs(input[0]);
            cnt++;
        }
        cout << cnt << "\n";
    }
}
void dfs(pair<int,int> locate) {
    farm[locate.first][locate.second] = 0;
    input.erase(
            remove(input.begin(), input.end(), locate),
            input.end()
    );
    pair<int, int> next;
    for (int i = 0;i<4; i++) {
        next = locate + direction[i];
        if (next.first >=0 && next.first<width && next.second>=0 && next.second<height) {
            if (farm[next.first][next.second] == 1)
                dfs(next);
        }
    }
}