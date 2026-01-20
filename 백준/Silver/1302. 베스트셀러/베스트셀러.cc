#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <map>
using namespace std;
struct Compare {
    bool operator()(const pair<int,string>& second, const pair<int,string> first) {
        if (second.first == first.first) {
            return second.second > first.second;
        }
        else {
            return second.first < first.first;
        }
    }
};
int main(void) {
    int n;
    cin >> n;
    vector<string> arr(n);
    map<string, int> mapSet;
    priority_queue< pair<int, string>, vector<pair<int, string>>, Compare> result;
    for (int i = 0; i < n; i ++) {
        string temp;
        cin >> temp;
        if (mapSet.find(temp) != mapSet.end())
        {
            mapSet.find(temp)->second++;
        }
        else {
            mapSet.insert({temp, 1});
        }
    }

    for (auto it = mapSet.begin(); it != mapSet.end(); it++) {
        result.push(make_pair(it->second, it->first));
    }
    cout << result.top().second;
}