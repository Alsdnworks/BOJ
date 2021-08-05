#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<utility>
#include <algorithm>
using namespace std;
int buffer=0;
int Nval; int key;
int val[13];
int acc=0;

int main() {
	scanf("%d %d", &Nval, &key);	
	for (int i = 0; i < Nval; i++) {
		scanf("%d", &val[i]);
	}
	for (int i = Nval-1; i >= 0; i--) {
		if (val[i] <= key) {
			while (acc+val[i] <= key) {
				acc += val[i];
				buffer++;
			}
		}
		if (acc == key) {
			printf("%d", buffer);
			break;
		}
	}
	return 0;
}