#include <iostream>
#include <vector>
#include <algorithm>
#define maxN 50000000
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> ari(maxN,1);
    ari[0]=0;
    ari[1]=0;
    for (int i = 2;i<maxN;i++) {
        if (ari[i]==0) {
            continue;
        }
        ari[i] = i;
        int tmp = i + i;
        while(tmp<maxN) {
            ari[tmp] = 0;
            tmp = tmp+i;
        }
    }
    ari.erase(remove(ari.begin(),ari.end(),0),ari.end());
    int st = 0;
    while (ari[st] < n) {
        st++;
    }
    for (int i = st;i<ari.size();i++) {
        string tmp = to_string(ari[i]);
        int left = 0, right = tmp.size()-1;
        while(left<=right) {
            if (tmp[left]!=tmp[right]) {
                break;
            }
            left++;
            right--;
        }
        if (left>right) {
            cout << tmp;
            break;
        }
    }
}