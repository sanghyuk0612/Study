#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> input(n + 1);
    int low = 0;
    for (int i = 1;i < n + 1;i++) {
        cin >> input[i];
    }
    vector<int> arr(n + 1);
    arr[1] = input[1];
    for (int i = 2;i < n + 1;i++) {
        int tmp = 0;
        int low = input[i];
        for (int j = i - 1;j >= 1;j--) {
            tmp = arr[j] + input[i - j];
            if (tmp < low) {
                low = tmp;
            }
        }
        arr[i] = low;
    }
    cout << arr[n];
}