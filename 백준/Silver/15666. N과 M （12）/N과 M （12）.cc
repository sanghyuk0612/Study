#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxDepth = 0;
int maxN = 0;
int m = 1;
void back(vector<int> v, vector<int> input, int depth);
vector<bool> selected;
vector<vector<int>> result;
int main(void) {
    int n1, n2;
    cin >> n1 >> n2;
    maxN = n1;
    maxDepth = n2;
    vector<int> input(n1);
    vector<int> v(n2,0);
    for (int i= 0 ;i <n1; i++) {
        cin >> input[i];
        selected.push_back(false);
    }
    for (int i = 1; i<n2; i++) {
        m *= (n1-i);
    }
    sort(input.begin(), input.end());
    input.erase(unique(input.begin(),input.end()),input.end());
    maxN = input.size();
    back(v, input, 0);
}

void back(vector<int> v, vector<int> input, int depth) {
    if (depth == maxDepth) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
//        result.push_back(v);
//        auto start = (result.size() <= m)
//                     ? result.begin()
//                     : result.end() - m;
//        if (find(start, result.end(), v) == result.end()) {
//            for (int i = 0; i < v.size(); i++) {
//                cout << v[i] << " ";
//            }
//            cout << "\n";
//            result.push_back(v);
//        }
    }

    else {
        for (int i = 0; i < maxN; i++) {
            if (v[0] == 0) {
                v[0] = input[i];
                selected[i] = true;
                back(v,input, depth + 1);
                selected[i] = false;
                v[0] = 0;
            }
            else {
                if (v[depth-1] <= input[i]) {
                    v[depth] = input[i];
                    back(v,input, depth+1);
                }
            }
        }
    }
}
