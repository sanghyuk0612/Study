#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    // 5의 배수의 개수만 세기
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }

    cout << cnt;
    return 0;
	

	
}