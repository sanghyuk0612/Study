#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <numeric>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
  vector<int> answer;
map<string, vector<int>> m;
map<int, int> number;
vector<string>::iterator iter;
int tmp;
int i=0;
for (iter = genres.begin(); iter != genres.end(); iter++ ,i++) {
    if (m.find(*iter) != m.end()) {
        m.find(*iter)->second.push_back(plays[iter - genres.begin()]*100 +i);
    }
    else {
        vector<int> tmpvec;
        tmpvec.push_back(plays[iter - genres.begin()]*100+i);
        m.insert({ *iter,tmpvec});
    }
}
int firstnum = 0, secondnum = 0;
map<int, string, greater<int>> hashnum;
string firstname, secondname;
for (auto iter = m.begin(); iter != m.end(); iter++) {
    //int sum = accumulate(iter->second.begin(), iter->second.end(), 0);
    int sum=0;
    for (auto itr = iter->second.begin(); itr != iter->second.end(); itr++) {
        sum += *itr * 0.01;
    };
    hashnum.insert({ sum, iter->first });
    //if (firstnum < sum) {
    //    secondnum = firstnum;
    //    secondname = firstname;
    //    firstnum = sum;
    //    firstname = iter->first;
    //}
    //else if (secondnum < sum) {
    //    secondnum = sum;
    //    secondname = iter->first;
    //}
}
//cout << "제일 많은 장르 : " <<  firstname << "\n두번쨰로 많은 장르 : "<< secondname << endl;
for (auto iter = m.begin(); iter != m.end(); iter++) {
    for (int j = 0; j < iter->second.size() - 1; j++) {  // vector sorting
        for (int k = 0; k < iter->second.size() - 1; k++) {
            int num1 = (iter->second[k]) * 0.01;
            int num2 = iter->second[k + 1] * 0.01;
            if (num1 < num2)
            {
                int temp = iter->second[k];
                iter->second[k] = iter->second[k + 1];
                iter->second[k + 1] = temp;
            }
        }
    }
    //sort(iter->second.begin(), iter->second.end() , greater<int>());
}
for (auto iter = hashnum.begin(); iter != hashnum.end(); iter++) {
    if (m.find(iter->second)->second.size() == 1) {
        answer.push_back(m.find(iter->second)->second[0] % 100);
    }
    else {
        answer.push_back(m.find(iter->second)->second[0] % 100);
        answer.push_back(m.find(iter->second)->second[1] % 100);
    }
}

//if (m.size() == 1) {
//    if (m.find(firstname)->second.size() == 1) {
//        answer.push_back(m.find(firstname)->second[0]%100);
//    }
//    else {
//        answer.push_back(m.find(firstname)->second[0] % 100);
//        answer.push_back(m.find(firstname)->second[1] % 100);
//    }
//}
//else if(m.size() ==0) {
//}
//else
//{
//    if (m.find(firstname)->second.size() == 1) {
//        answer.push_back(m.find(firstname)->second[0] % 100);
//    }
//    else {
//        answer.push_back(m.find(firstname)->second[0] % 100);
//        answer.push_back(m.find(firstname)->second[1] % 100);
//    }
//    if (m.find(secondname)->second.size() == 1) {
//        answer.push_back(m.find(secondname)->second[0] % 100);
//    }
//    else {
//        answer.push_back(m.find(secondname)->second[0] % 100);
//        answer.push_back(m.find(secondname)->second[1] % 100);
//    }
//}
return answer;
}