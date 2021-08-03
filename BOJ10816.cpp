#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int key[20000005], buffer[20000005];
int i, n, t;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		key[t]++;
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		buffer[i] = key[t];
	}
	for (i = 0; i < n; i++)
		printf("%d ", buffer[i]);
	return 0;
}