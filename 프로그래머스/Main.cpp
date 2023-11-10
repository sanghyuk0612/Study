#include <string>
#include <vector>

using namespace std;
class Myhash {
public:
    vector<string> genres;
    vector<int> plays;
    void push(string genre, int play);
};
void Myhash::push(string genre, int play) {
    int len = genre.size();
    int index;
    if (len == 0)
        genres.push_back(genre); plays.push_back(play);
    if (find(genres.begin(), genres.end(), genre) == genres.end()) { // vector내에 0이 존재하지 않음
        genres.push_back(genre);
        plays.push_back(play);
    }
    else {
        index = find(genres.begin(), genres.end(), genre) - genres.begin();
        plays.push_back(play);
    }
}
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    return answer;
}


int main(void) {
    vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
    vector<int> plays = { 500, 600, 150, 800, 2500 };
    vector<int> answer = solution(genres, plays);
    return 0;
}