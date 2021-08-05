#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//1085번: 직사각형에서 탈출
//w,h의 중점을 기준으로 외곽에 가까운 거리를 저장후 가까운거리 출력
using namespace std;
int x; int y; int w; int h;
int main() {
	int X; int Y;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	x>w/2? X = w - x: X = x;
	y > h / 2? Y = h - y: Y = y;
	X > Y?  printf("%d", Y):printf("%d", X);
	return 0;
}