#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
using namespace std;
int testa; int testb;
int psum = 0;
int pmin;
void p_test(int test,int testb) {
	if (test == 1)return;
	for (int i=2; i < test; i++) {
		if (test % i == 0)
			return;
	}
	if (psum == 0) {
		psum += test;
		pmin = test;
	}
	else psum+=test;
}
int main() {	
	scanf("%d %d", &testa, &testb);
	for (int i = testa; i <= testb; i++) {
		p_test(i,testb);
	}
	if (psum == 0)
		printf("-1");
	else printf("%d\n%d",psum,pmin);
	return 0;
}
