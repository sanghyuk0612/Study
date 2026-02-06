#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> plan;
int main(void) {
    int n, w;
    cin >> n;
    plan = vector<pair<int,int>>(n);
    for (int i = 0 ;i <n;i++) {
        cin >> plan[i].second;
        cin >> plan[i].first;
    }
    sort(plan.begin(), plan.end());
    int cnt = 0;
    int endT;
    for (int i = 0;i<n;) {
        endT = plan[i].first;
        cnt++;
        i++;
        while (endT > plan[i].second) {
            i++;
            if (i>=n) {
                break;
            }
        }
    }
    cout << cnt;
}