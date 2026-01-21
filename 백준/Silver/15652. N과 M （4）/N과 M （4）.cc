#include<iostream>
#include<vector>
using namespace std;
int maxDepth = 0;
int maxN = 0;
void back(vector<int> v, int depth) {
    if (depth == maxDepth) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    else {
        for (int i = 1; i <= maxN; i++) {
            if (v[0] == 0) {
                v[0] = i;
                back(v,depth+1);
                v[0] = 0;
            }
            else {
                if (v[depth-1] <= i) {
                    v[depth] = i;
                    back(v,depth+1);
                    v[depth] = 0;
                }
            }
        }
    }
}

int main(void) {
    int n1, n2;
    cin >> n1 >> n2;
    maxN = n1;
    maxDepth = n2;
    vector<int> v(n2,0);
    back(v, 0);
}