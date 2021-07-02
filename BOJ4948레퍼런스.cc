#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
#include <vector>

using namespace std;
int test;
vector <int> output;

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
	for (int i = a; i <= b; i++) {
		if (list[i] == true)
			prime++;
	}
	output.push_back(prime);
	free(list);

}
int main() {
	output.reserve(100);
	while (1){
		scanf("%d", &test);
		if (test == 0)
			break;
		else
			count(test);
	}
	for (int i = 0; i < output.size(); i++)
		printf("%d\n", output[i]);
	return 0;
}