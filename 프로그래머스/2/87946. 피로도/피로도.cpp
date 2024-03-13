#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> hap;
/* 순열 알고리즘 */
void Permutation(vector<vector<int>>& Array,int k, int Start, int End)
{
    if (Start == End)
    {
        int total=0;
        for (const auto it : Array)
        {
            if(it[0]<=k){
                k=k-it[1];
                total++;
            }
        }
        hap.push_back(total);
    }
    else
    {
        for (int i = Start; i <= End; ++i)
        {
            swap(Array[Start], Array[i]);
            Permutation(Array,k, Start + 1, End);
            swap(Array[Start], Array[i]);
        }
    }
}
int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int temp = dungeons.size();
    Permutation(dungeons,k,0,dungeons.size()-1);
    answer = *max_element(hap.begin(), hap.end());
    return answer;
}