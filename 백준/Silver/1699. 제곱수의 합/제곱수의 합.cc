#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n + 2);
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2;i < n + 1;i++) {
        int tmp = (int)sqrt(i);
        int low = i;
        for (int j = tmp;j > 0;j--) {
            if ((arr[i - j* j] + 1) < low) {
                low = arr[i - j * j] + 1;
            }
        }
        arr[i] = low;
    }
    cout << arr[n];
}