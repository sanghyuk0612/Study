#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

bool solution(vector<string> phone_book) {
    set<string> table;        //set이 hash를 불러와서 알아서 string을 해시 처리
size_t min = 0xFFFFFFFF;  // size_t(unsigned int)를 사용하여 8바이트 정수 자료형의 최대값으로 초기화 

sort(phone_book.begin(), phone_book.end());  //사전 순으로 정렬해야 편하다...

for (string phone : phone_book)
{
    if (!table.empty())
    {
        //최소 길이의 문자열부터만 처리하여 연산 줄이기(i = min)
        for (int i = min; i <= phone.size(); ++i)
        {
            //문자열을 잘라서 탐색 (+알아서 해시 처리)
            string key = phone.substr(0, i);
            if (table.find(key) != table.end())
            {
                return false;
            }
        }
    }

    //새로운 멤버 문자열을 map에 추가. 테이블을 먼저 등록하여 키값이 중복되는 이슈도 없음
    table.insert(phone);

    //문자열 길이의 최소값 갱신 
    if (phone.size() < min)
    {
        min = phone.size();
    }
}
return true;
}