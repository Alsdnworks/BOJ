#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
//2164��: ī��2
//1���� t������ ī�带 ť�� Ǫ��
//pop�� �������� 1���� ���� ��� �ݺ����� ���� ����Ѵ�.
using namespace std;
queue<int>q;
int i, n, t;
int main() {
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		q.push(i);
	while (1) {
		if (q.size() == 1)break;
		q.pop();//���� ���� �ִ� ī�带 �ٴڿ� ������
		if (q.size() == 1)break;
		q.push(q.front()); //���� ���� �ִ� ī�带 ���� �Ʒ��� �ִ� ī�� ������ Ǫ�� 
		q.pop();//���� ���� �ִ� ī�带 ���ش�
	}
	printf("%d", q.front());
	return 0;
}