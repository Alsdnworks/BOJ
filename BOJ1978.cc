#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
//1978��: �Ҽ� ã��
//num��ŭ �ݺ��ϸ� test[i]�� ����� ���� p_test�Լ��� ���� �Ҽ����� �Ǵ��� 
//pnumcount�� �������� �� ���� ����Ѵ�.
//�������׳׽��� ü�� �ƴ� ���� 1�̰ų� mod�� 0���� Ȯ���ϴ� ����� ����ߴ�.
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
