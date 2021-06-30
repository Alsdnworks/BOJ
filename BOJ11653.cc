#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;



//void p_factor(int test) {
//
//}
int main() {

	int inputN;

	scanf("%d", &inputN);
	for (int i = 2; i <= sqrt(inputN); i++) {
		while (inputN % i == 0) {
			printf("%d\n", i);
			inputN /= i;
		}
	}
	if (inputN != 1) printf("%d\n", inputN);
	return 0;
}
