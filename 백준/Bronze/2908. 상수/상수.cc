#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void) {
	string a, b;
	cin >> a;
	cin >> b;
	char tmp;
	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;

	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;

	int at, bt;
	at = stoi(a);
	bt = stoi(b);
	if (at > bt) {
		cout << at;
	}
	else
		cout << bt;
}