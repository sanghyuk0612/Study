#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    cin >> n;
    for (int i = 0; i <n;i++) {
        cin >> m;
        int cnt = 1;
        vector<pair<int,int>> input(m);
        for (int j = 0; j < m; j++) {
            cin >> input[j].first;
            cin >> input[j].second;
        }
        sort(input.begin(), input.end());
        int min = input[0].second;
        for (int j = 1; j < m; j++) {
            if (min == 1) {
                break;
            }
            if (input[j].second < min) {
                min = input[j].second;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}