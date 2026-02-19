#include <iostream>
#include <vector>
using namespace std;
vector<int> input;
int cnt = 0;
int goal;
vector<bool> visit;
void back(int cur, int v) {
    visit[v] = true;
    if (cur+input[v] == goal) {
        cnt++;
    }
    for (int i = v+1;i<input.size();i++) {
        if (!visit[i]) {
            back(cur+input[v], i);
        }
    }
    visit[v] = false;
}

int main(void) {
    int n;
    cin >> n >> goal;
    input.resize(n);
    visit.resize(n);
    for (int i = 0 ; i<n;i++) {
        cin >> input[i];
    }
    for (int i = 0; i < n;i++) {
        back(0,i);
    }
    cout << cnt;
}
