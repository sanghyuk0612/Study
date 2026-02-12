#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >>n;
    vector<long long> input(n);
    for (int i = 0 ;i<n;i++) {
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    int left, right;
    left = 0;
    right = input.size() - 1;
    long long min = 99999999999;
    pair<int, int> minIdx = {-1,-1};
    while (left < right) {
        if (abs(input[left]+input[right]) < abs(min)) {
            min = input[left]+input[right];
            minIdx={left,right};
        }
        if (abs(input[left])<abs(input[right])) {
            right--;
        }
        else {
            left++;
        }
    }
    cout << input[minIdx.first] << " " << input[minIdx.second];
}