#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int tmp;
    for (int i = 0;i < n;i++) {
        cin >> tmp;
        vector<vector<int>> input(2, vector<int>(tmp + 2));
        for (int j = 0;j < tmp;j++) {
            cin >> input[0][j];
        }
        for (int j = 0;j < tmp;j++) {
            cin >> input[1][j];
        }
        vector<vector<int>> arr(2, vector<int>(tmp + 2));
        arr[0][0] = input[0][0];
        arr[1][0] = input[1][0];
        arr[0][1] = input[0][1]+input[1][0];
        arr[1][1] = input[1][1]+input[0][0];
        int val1, val2;
        for (int j = 2;j < tmp;j++) {
            if (arr[1][j - 1] < arr[1][j - 2]) {
                arr[0][j] = arr[1][j - 2] + input[0][j];
            }
            else {
                arr[0][j] = arr[1][j - 1] + input[0][j];
            }
            if (arr[0][j - 1] < arr[0][j - 2]) {
                arr[1][j] = arr[0][j - 2] + input[1][j];
            }
            else {
                arr[1][j] = arr[0][j - 1] + input[1][j];
            }
        }
        if (arr[0][tmp - 1] < arr[1][tmp - 1]) {
            cout << arr[1][tmp - 1] << endl;
        }
        else {
            cout << arr[0][tmp - 1] << endl;
        }
    }
}