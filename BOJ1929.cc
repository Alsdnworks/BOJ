#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
//1929��: �Ҽ� ���ϱ�
//��Ű��� �������׳׽���ä �׸��� �ҽ��ڵ��� 
using namespace std;
int testa; int testb;

void ptest(int a, int b) {
	bool* list = new bool[b + 1];
	for (int i = 2; i <= b; i++)
		list[i] = true;
	for (int i = 2; i * i <= b; i++) {
		if (list[i])
			for (int j = i * i; j <= b; j += i)
				list[j] = false;
	}
	for (int i = a; i <= b; i++) {
		if (list[i] == true)
			printf("%d\n", i);
	}
	free(list);
}
int main() {
	scanf("%d %d", &testa, &testb);
	ptest(testa, testb);
	return 0;
}