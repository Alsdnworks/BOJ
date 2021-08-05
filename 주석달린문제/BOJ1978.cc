#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
//1978번: 소수 찾기
//num만큼 반복하며 test[i]에 저장된 수를 p_test함수를 통해 소수인지 판단해 
//pnumcount를 증가시켜 그 값을 출력한다.
//에라스토테네스의 체가 아닌 수가 1이거나 mod가 0인지 확인하는 방식을 사용했다.
using namespace std;
int test[103];
int pnumcount = 0;

void p_test(int testnum) {
	if (testnum == 1)
		return;
	for (int i = 2; i < testnum; i++) {
		if (testnum % i == 0)
			return;
	}
	pnumcount++;
}
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &test[i]);
	}
	for (int i = 0; i < num; i++)
		p_test(test[i]);
	printf("%d", pnumcount);
	return 0;
}
