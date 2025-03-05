#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n + 1);
    int high = 0;
    for (int i = 1;i < n + 1;i++) {
        cin >> input[i];
    }
    vector<int> arr(n + 1);
    arr[1] = input[1];
    for (int i = 2;i < n + 1;i++) {
        int tmp = 0;
        int high = input[i];
        for (int j = i - 1;j >= 1;j--) {
            tmp = arr[j] + input[i - j];
            if (tmp > high) {
                high = tmp;
            }
        }
        arr[i] = high;
    }
    cout << arr[n];
}