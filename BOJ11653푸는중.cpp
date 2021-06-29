#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int>p_factors;

bool p_test(int ptest) {//소수판별
	int limit = (int)(sqrt(ptest)) + 1;
	if (ptest == 1)
		return false;
	for (int i = 2; i < limit; i++) {
		if (ptest % i == 0)
			return false;
	}
	return true;
}

void p_factor(int test) {//소인수분해
	for (int i = 2; i <= test; i++) {
		if (p_test(i) == true && test % i == 0) {
			test /= i;
			p_factors.push_back(i);
			break;
		}
	}
	if (test == 1)
		return;
	p_factor(test);
}

int main() {//메인
	int test;
	p_factors.reserve(100);
	scanf("%d", &test);
	p_factor(test);
	for (int i = 0; i < p_factors.size(); i++) 
		printf("%d\n", p_factors[i]);
	return 0;
}
