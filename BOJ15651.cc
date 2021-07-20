#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int m; int n;
int arg[10];
void fnc(int lvl, int key){
	if (lvl > m) {
		for (int i = 1; i <= m; i++)
			printf("%d ", arg[i]);
		printf("\n");
		return;
	}
	for (int i=1; i <= n; i++) {
		arg[lvl] = i;
		fnc(key+1, lvl+1);
	}
}
int main() {
	scanf("%d %d", &n, &m);
	fnc(1,1);
	return 0;
}