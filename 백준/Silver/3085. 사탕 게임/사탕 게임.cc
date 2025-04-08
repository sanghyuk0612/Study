#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int high;
int check(vector<string> str){
    int len = str.size();
    //가로 체크
    for(int i=0;i<len;i++){
        int cnt =1;
        char c = str[i][0];
        for(int j=1;j< str[i].length();j++){
            if(c==str[i][j]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            if(high<cnt){
                high = cnt;
            }
            c = str[i][j];
        }
    }
    //세로 체크
    for(int j=0;j< str[0].length();j++)
    {
        int cnt =1;
        char c = str[0][j];
        for(int i=1;i<len;i++){
            if(c==str[i][j]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            if(high<cnt){
                high = cnt;
            }
            c = str[i][j];
        }
    }
    return 0;
}
int main(void) {
    int n;
    cin >> n;
    vector<string> input(n);

    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    high = 1;
    check(input);
    //가로 체크
    for(int i=0;i<n;i++){
        char c = input[i][0];
        for(int j=1;j< n;j++){
            if(c==input[i][j]){
                continue;
            }
            else{
                input[i][j-1]=input[i][j];
                input[i][j]=c;
                check(input);
                input[i][j]=input[i][j-1];
                input[i][j-1]=c;
            }
            c = input[i][j];
        }
    }
    //세로 체크
    for(int j=0;j< input[0].length();j++)
    {
        int cnt =1;
        char c = input[0][j];
        for(int i=1;i<n;i++){
            if(c==input[i][j]){
                continue;
            }
            else{
                input[i-1][j]=input[i][j];
                input[i][j]=c;
                check(input);
                input[i][j]=input[i-1][j];
                input[i-1][j]=c;
            }
            if(high==n){
                cout << n;
                return 0;
            }
            c = input[i][j];
        }
    }
    cout << high;
}