#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int m; int n;
int chk[11];
int arg[11];
void backtrack(int rpt,int lim) {
	if (m == rpt) {
		for (int i = 0; i < m; i++)
			printf("%d ", arg[i]);
		printf("\n");
		return;
	}
	for (int i = lim; i <= n; i++) 
		if (chk[i] == 0) {
			chk[i] = 1;
			arg[rpt] = i;
			backtrack(rpt + 1,i);
			chk[i] = 0;
		}
}
int main() {
	scanf("%d %d", &n, &m);
	backtrack(0,1);
	return 0;
}