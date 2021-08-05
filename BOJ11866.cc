#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
queue <int> q;int n, m, i, j, pt = 0;
int main(){
	scanf("%d %d", &n, &m);
	for (i = 1; i < n+1; i++)
		q.push(i);
	printf("<");
	for (; q.size() != 0; q.pop(), pt++) {
		for (j = 0; j < m - 1; j++){
			q.push(q.front());
			q.pop();
		}
		if (pt != n) {
			cout << q.front();
			if (pt +1!= n)
				printf(", ");
		}
	}
	printf(">");
	return 0;
}