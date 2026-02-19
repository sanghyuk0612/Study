#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<char>> mat;
vector<int> result;
vector<int> collect;
void back(int depth, int v) {
    result[depth] = v;
    if (collect[collect.size()-1]!=11) {
        return;
    }
    if (depth == result.size()-1) {
        for (int i = 0 ;i<result.size();i++) {
            collect[i] = result[i];
//            cout << result[i] << " ";
        }
//        cout << "\n";
        return;
    }
    depth++;
    int st, end;
    if (mat[depth][depth]=='-') {
        st = -10, end = -1;
    }
    if (mat[depth][depth]=='+') {
        st = 1;
        end = 10;
    }
    if (mat[depth][depth]=='0') {
        st = 0, end = 0;
    }

    for (int i = st;i<=end;i++) {
        bool stopFlag = false;
        for (int j = 0; j <= depth; j++) {
            int tmp = 0;
            for (int k = j ;k<depth;k++) {
                tmp += result[k];
            }
            tmp += i;
            if (tmp > 0) {
                if (mat[j][depth] != '+') {
                    stopFlag = true;
                    break;
                }
            }

            if (tmp < 0) {
                if (mat[j][depth] != '-') {
                    stopFlag = true;
                    break;
                }
            }

            if (tmp == 0) {
                if (mat[j][depth] != '0') {
                    stopFlag = true;
                    break;
                }
            }
        }

        if (stopFlag) {
            continue;
        }
        back(depth,i);
    }
}

int main (void) {
    int n;
    cin >> n;
    mat.resize(n,vector<char>(n));
    result.resize(n);
    collect.resize(n,11);
    string input;
    cin >> input;
    int cnt = 0;
    for (int i = 0; i<n; i++) {
        for (int j = i; j < n; j++) {
            mat[i][j] = input[cnt++];
        }
    }
    if (mat[0][0]=='-') {
        for (int i = -10; i <0; i++) {
            back(0, i);
        }
    }
    if (mat[0][0]=='+') {
        for (int i = 1; i <=10; i++) {
            back(0, i);
        }
    }
    if (mat[0][0]=='0') {
        back(0, 0);
    }
    for (int i = 0 ;i<result.size();i++) {
        cout << collect[i] << " ";
    }
}