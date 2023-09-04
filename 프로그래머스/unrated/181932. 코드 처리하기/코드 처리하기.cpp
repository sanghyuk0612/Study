#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode =0;
    for (int i =0 ;i<code.length();i++){
        if (code.at(i)=='1'){
            if(mode ==1)
                mode--;
            else
                mode++;
        }
        else{
            if (mode ==0){
                if(i%2 == 0)
                    answer+=code.at(i);
            }
            else
                if(i%2 == 1)
                    answer+=code.at(i);
        }
    }
    if (answer.length()==0)
        return "EMPTY";
        
    return answer;
    
}