#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gettingGCD(int a, int b){
    int t;
    while (b) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main(void){
    int n, s;
    cin >> n >> s;
    vector<int> bro(n);
    vector<int> vec;
    int result, num;
    cin >> result;
    result -= s;

    if(result <0) result*=-1;

    for (int i=1;i<n;i++){
        cin >> num;
        num -= s;
        if(num<0) num*=-1;
        result = gettingGCD(result,num);
    }
    cout << result;
}