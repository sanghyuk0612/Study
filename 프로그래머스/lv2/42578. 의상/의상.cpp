#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1; // answer 1로 정의

    multiset<string> type; //multiset 사용 
    // multiset은 키값 중복허용 set은 중복 비허용
    multiset<string>::iterator iter; //iter 정의

    for(int i = 0; i<clothes.size(); i++)
    {
        type.insert(clothes[i][1]); //type에 옷종류를 삽입
    }

    string oldstr; //oldstr 선언

    for(iter = type.begin(); iter != type.end(); iter++ )
    {
        if(oldstr != *iter) //oldstr와 *iter이 다르다면
        {
            answer *= (type.count(*iter))+1; //answer에 가리키고있는 개수 +1을 해줌
            oldstr = *iter; //그리고 oldstr을 가리키고있는것으로 변경
        }
    }

    answer -= 1;

    return answer;
}