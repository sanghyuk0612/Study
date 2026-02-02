#include <iostream>
using namespace std;

int main() {
    long long n1, n2;
    cin >> n1 >> n2;
    long long z = -1;
    long long tmp;
    if (n1 < n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    while (z !=0) {
        z = n1 % n2;
        n1 = n2;
        n2 = z;
    }
    for (long long i = 0; i < n1;i++) {
        cout << 1;
    }
}