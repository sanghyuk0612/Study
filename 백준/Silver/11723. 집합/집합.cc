#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
// add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
// remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
// check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
// toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
// all: S를 {1, 2, ..., 20} 으로 바꾼다.
// empty: S를 공집합으로 바꾼다.
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string command = "";
    unordered_set<int> s;
    int tmp;
    for (int i = 0 ; i <n;i++) {
        cin >> command;
        if (command == "add") {
            cin >> tmp;
            s.insert(tmp);
        }
        else if (command == "remove") {
            cin >> tmp;
            s.erase(tmp);
        }
        else if (command == "check") {
            cin >> tmp;
            if (s.count(tmp) == 0) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else if (command == "toggle") {
            cin >> tmp;
            if (s.count(tmp) == 0) {
                s.insert(tmp);
            }
            else {
                s.erase(tmp);
            }
        }
        else if (command == "all") {
            for (int i = 1 ; i <=20;i++) {
                s.insert(i);
            }
        }
        else if (command == "empty") {
            s.clear();
        }
    }
}