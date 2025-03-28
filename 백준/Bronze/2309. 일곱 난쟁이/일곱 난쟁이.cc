#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {
    int n;
    vector<int> input(9);
    for(int i=0;i<9;i++){
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    vector<int> result(7);
    
    int cnt =0;
    int min =0;
    for(int i=0;i<9;i++){
        int sum=0;
        int n1=input[i],n2=0;
        input[i]=0;
        for(int j=0;j<9;j++){
            n2 = input[j];
            input[j]= 0;
            sum = accumulate(input.begin(), input.end(), 0);
            if(sum<100){
                input[j]= n2;
                break;
            }
            if(sum == 100){
                for(int k=0;k<9;k++){
                    if(input[k]!=0){
                        cout << input[k]<<"\n";
                    }
                }
                return 0;
            }
            
            input[j]= n2;
        }
        input[i] = n1;
    }

}