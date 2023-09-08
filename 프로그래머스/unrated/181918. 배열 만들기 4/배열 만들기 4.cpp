#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while ( i < arr.size()){
        if(stk.size() ==0 ){
            stk.push_back(arr[i++]);
        }
        else if(stk[stk.size()-1]<arr[i]){
            stk.push_back(arr[i++]);
        }
        else
            stk.erase(stk.end() - 1);
    }
    return stk;
}