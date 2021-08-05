#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
//2164번: 카드2
//1부터 t까지의 카드를 큐에 푸시
//pop의 과정에서 1장이 남을 경우 반복문을 나와 출력한다.
using namespace std;
queue<int>q;
int i, n, t;
int main() {
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		q.push(i);
	while (1) {
		if (q.size() == 1)break;
		q.pop();//제일 위에 있는 카드를 바닥에 버린다
		if (q.size() == 1)break;
		q.push(q.front()); //제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 푸시 
		q.pop();//제일 위에 있는 카드를 없앤다
	}
	printf("%d", q.front());
	return 0;
}