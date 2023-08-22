#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(string my_string, string overwrite_string, int s) {
    int len;
    len = overwrite_string.length();
    for (int i = 0;i<len;i++){
        my_string[i+s] = overwrite_string[i];
    }
    string answer = "";
    answer = my_string;
    return answer;
}