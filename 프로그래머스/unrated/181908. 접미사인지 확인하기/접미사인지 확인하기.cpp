#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int len = is_suffix.size();
    if( my_string.size()<is_suffix.size())
        return 0;
    string tmp = my_string.substr(my_string.size()-len,len);
    cout<<tmp;
    if (tmp.compare(is_suffix)==0)
        answer = 1;
    return answer;
}