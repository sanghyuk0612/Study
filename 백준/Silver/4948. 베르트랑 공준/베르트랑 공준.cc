#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	int maxValue= 0;
	int n;
	vector<int> ari(246913, 1);
	ari[0]=0;
	ari[1]=0;
	for (int i = 2;i<246913;i++) {
		if (ari[i]==0){
			continue;
		}
		int step = i;
		int tmp = step*2;
		while (tmp <=246912) {
			ari[tmp] = 0;
			tmp+=step;
		}
	}
	cin >> n;
	while(n!=0) {
		int cnt = count(ari.begin()+n+1, ari.begin()+2*n+1,1) ;
		cout << cnt << "\n";
		cin >> n;
	}
}