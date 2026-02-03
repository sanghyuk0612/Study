#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<string, int> cloth;
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            cloth[type]++;
        }

        int answer = 1;
        for (auto &p : cloth) {
            answer *= (p.second + 1);
        }

        cout << answer - 1 << "\n";
    }
}