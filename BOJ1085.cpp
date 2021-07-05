#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int x; int y; int w; int h;
int main() {
	int tempX; int tempY;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (x > (w / 2))  tempX = w - x;
	else  tempX = x;
	if (y > (h / 2))  tempY = h - y;
	else  tempY = y;
	if (tempX > tempY)  printf("%d", tempY);
	else  printf("%d", tempX);
	return 0;
}