#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int output[246913];

void count(int a){
	int prime = 0;
	int b = a * 2;
	bool* list = new bool[b + 1];
	for (int i = 2; i <= b; i++)
		list[i] = true;
	for (int i = 2; i * i <= b; i++) {
		if (list[i])
			for (int j = i * i; j <= b; j += i)
				list[j] = false;
	}
	for (int i = a+1; i <= b; i++) {
		if (list[i] == true)
			prime++;
	}
	for (int i = 0; i < sizeof(output) / sizeof(int); i++) {
		if (output[i] == 0) {
			output[i] = prime;
			break;
		}
	}
}
int main() {
	int test;
	while (1){
		scanf("%d", &test);
		if (test == 0)
			break;
		else
			count(test);
	}
	for (int i = 0; i < sizeof(output) / sizeof(int); i++){
		if (output[i] == 0)
			break;
		else printf("%d\n", output[i]);
	}
	return 0;
}