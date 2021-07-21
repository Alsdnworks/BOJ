#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
int n; int out=0;
int pan[15];
//rep as row i as columm
int backtrack(int piv, int rep) {
	bool flag=false;
	if (piv == n)
		return(out);
	if (rep == n) {
		for (int i = 1; i <= n; i++)
			if (pan[i] != 0)
				out++;
		backtrack(piv + 1, 1);
	}
	for (int i = 1; i < n; i++) {
			if (rep == 1) {
				pan[i] = piv;
				break;
			}
			else if (pan[j] != pan[i] && abs(pan[i] - pan[j]) != abs(i-j)) {
				pan[rep] = i;
				backtrack(piv, rep + 1);
			}
		}
		backtrack(piv, rep + 1);
	}
}

		//if (pan[j] == i || pan[j] - j == i || pan[j] + j == i)
int main() {
	scanf("%d", &n);
	backtrack(1,1);
	printf("%d", out);
	return 0;
}