#include <iostream>
#include <vector>
#include <queue>
struct cmp{
	bool operator()(int a, int b){
		if (abs(a)==abs(b)) {
			return a > b;
		}
		else {
			return abs(a)>abs(b);
		}
	}
};

using namespace std;
int main(void) {
	priority_queue<int, vector<int>, cmp> q;
	int n;
	cin >> n;
	int tmp;
	for (int i = 0 ;i <n;i++) {
		cin >> tmp;
		if (tmp == 0 ) {
			if (q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << q.top() <<"\n";
				q.pop();
			}
		}
		else {
			q.push(tmp);
		}
	}
}
