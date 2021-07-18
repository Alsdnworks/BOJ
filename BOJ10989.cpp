#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int cou[10001] = {0};
int main() {
	int rep;
	int i = 0; int j = 0;
	scanf("%d", &rep);
	for (i = 0; i < rep; i++) {
		int x;
		scanf("%d", &x);
		cou[x]+=1;
	}
	for (i = 1; i <= 10000; i++) {
			for (j = 0; j < cou[i]; j++)
				printf("%d\n", i);
	}
	return 0;
}