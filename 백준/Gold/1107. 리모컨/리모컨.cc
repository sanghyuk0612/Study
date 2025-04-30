#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> remo(10);
bool check(string s) {
    for (int i = 0;i < s.length();i++) {
        int tmp = s[i] - '0';
        if (remo[tmp] == -1) {
            return false;
        }
    }
    return true;
}
int main(void) {
    int M;
    int N;
    cin >> N;
    cin >> M;
    
    string s;
    string result = "";
    int start = 100;
    int cnt = 0;
    int len = s.length() - 1;

    for (int i = 0;i < 10;i++) {
        remo[i] = i;
    }
    vector<int> bro(M);
    for (int i = 0;i < M;i++) {
        cin >> bro[i];
        remo[bro[i]] = -1;
    }
    if(N==100){
        cout <<0;
        return 0;
    }
    int re = -1;
    int min = abs(N - 100);
    int minnum;
    while (re < 1000000) {
        re++;
        if (!check(to_string(re))) {
            continue;
        }
        if (min > abs(N - re)) {
            min = abs(N - re);
            minnum = re;
        }
        if (re > N && min < abs(N - re)) {
            break;
        }
    }
    
    
    cnt = min;
    result = to_string(minnum);
    cnt += result.length();
    if (cnt > abs(N - 100)) {
        cnt = abs(N-100);
    }
    cout << cnt;
}