#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> input(n, vector<int>(3));
    vector<vector<int>> arr(n, vector<int>(3));
    vector<vector<int>> arr1(n, vector<int>(3));
    vector<vector<int>> arr2(n, vector<int>(3));
    for (int i = 0;i < n;i++) {
        cin >> input[i][0];
        cin >> input[i][1];
        cin >> input[i][2];
    }
    arr[0][0] = input[0][0];
    arr1[0][1] = input[0][1];
    arr2[0][2] = input[0][2];

    arr[1][0] = 9999;
    arr[1][1] = arr[0][0] + input[1][1];
    arr[1][2] = arr[0][0] + input[1][2];

    arr1[1][1] = 9999;
    arr1[1][0] = arr1[0][1] + input[1][0];
    arr1[1][2] = arr1[0][1] + input[1][2];

    arr2[1][0] = arr2[0][2] + input[1][0];
    arr2[1][1] = arr2[0][2] + input[1][1];
    arr2[1][2] = 9999;

    int tmp1, tmp2;
    for (int i = 2;i < n;i++) {
        //arr
        tmp1 = arr[i - 1][1] + input[i][0];
        tmp2 = arr[i - 1][2] + input[i][0];
        if (tmp1 > tmp2) {
            arr[i][0] = tmp2;
        }
        else {
            arr[i][0] = tmp1;
        }

        tmp1 = arr[i - 1][0] + input[i][1];
        tmp2 = arr[i - 1][2] + input[i][1];
        if (tmp1 > tmp2) {
            arr[i][1] = tmp2;
        }
        else {
            arr[i][1] = tmp1;
        }
        tmp1 = arr[i - 1][0] + input[i][2];
        tmp2 = arr[i - 1][1] + input[i][2];
        if (tmp1 > tmp2) {
            arr[i][2] = tmp2;
        }
        else {
            arr[i][2] = tmp1;
        }
        //arr1
        tmp1 = arr1[i - 1][1] + input[i][0];
        tmp2 = arr1[i - 1][2] + input[i][0];
        if (tmp1 > tmp2) {
            arr1[i][0] = tmp2;
        }
        else {
            arr1[i][0] = tmp1;
        }
        tmp1 = arr1[i - 1][0] + input[i][1];
        tmp2 = arr1[i - 1][2] + input[i][1];
        if (tmp1 > tmp2) {
            arr1[i][1] = tmp2;
        }
        else {
            arr1[i][1] = tmp1;
        }
        tmp1 = arr1[i - 1][0] + input[i][2];
        tmp2 = arr1[i - 1][1] + input[i][2];
        if (tmp1 > tmp2) {
            arr1[i][2] = tmp2;
        }
        else {
            arr1[i][2] = tmp1;
        }
        //arr2
        tmp1 = arr2[i - 1][1] + input[i][0];
        tmp2 = arr2[i - 1][2] + input[i][0];
        if (tmp1 > tmp2) {
            arr2[i][0] = tmp2;
        }
        else {
            arr2[i][0] = tmp1;
        }
        tmp1 = arr2[i - 1][0] + input[i][1];
        tmp2 = arr2[i - 1][2] + input[i][1];
        if (tmp1 > tmp2) {
            arr2[i][1] = tmp2;
        }
        else {
            arr2[i][1] = tmp1;
        }
        tmp1 = arr2[i - 1][0] + input[i][2];
        tmp2 = arr2[i - 1][1] + input[i][2];
        if (tmp1 > tmp2) {
            arr2[i][2] = tmp2;
        }
        else {
            arr2[i][2] = tmp1;
        }
    }
    vector<int> result;
    result.push_back(arr[n - 1][1]);
    result.push_back(arr[n - 1][2]);

    result.push_back(arr1[n - 1][0]);
    result.push_back(arr1[n - 1][2]);

    result.push_back(arr2[n - 1][0]);
    result.push_back(arr2[n - 1][1]);

    int min = *min_element(result.begin(), result.end());
    cout << min;

}