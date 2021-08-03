#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int main() {
	int rep, argu = 0,sum=0;
	stack<int>Stack;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		argu = 0;
		int command;
		scanf("%d", &command);

		if (command==0) {
			Stack.pop();
			continue;
		}
		if (command != 0) {
			Stack.push(command);
			continue;
		}
	}
	while (Stack.empty() != 1) {
		sum += Stack.top();
		Stack.pop();
	}
	printf("%d", sum);
	return 0;
}