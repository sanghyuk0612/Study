#include <iostream>
using namespace std;

int main() {
	int T, H, W, N;		// test data, floor of hotel, the number of room, the number of people
	int floor, room, number, answer[100];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		floor = N % H;
		room = N / H + 1;

		if (floor == 0) {
			floor = H;
			room = N / H;
		}
		number = floor * 100 + room;
		answer[i] = number;
	}

	for (int i = 0; i < T; i++) {
		cout << answer[i]<< endl;
	}

	return 0;
}