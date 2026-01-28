#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    if (n<100) {
        cout << n;
        return 0;
    }
    int result = 99;
    int n100, n10, n1;
    int tmp;
    for (int i = 100; i <= n; i++){
        if (i == 1000) {
            break;
        }
        int tmp = i;
        n100 = tmp/100;
        tmp %=100;
        n10 = tmp/10;
        tmp %=10;
        n1 = tmp;
        if (n100 - n10 == n10 - n1){
            result++;
        }
    }
    cout << result;
}
