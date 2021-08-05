#include<bits/stdc++.h>
using namespace std;
int m, n;
int main() {
	while (1) {
		cin >> m >> n;
		if (m == 0 && n == 0)break;
		if (m % n == 0) cout << "multiple\n";
		else if(n % m == 0)cout << "factor\n";
		else cout << "neither\n";
	}
	return 0;
}