#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

using namespace std;
int tri[501][501] = {};
int num, m;

//x가 0이 아니면 left,right중 큰값을 더함, x가 0인경우 left를 더함
void adder(int y, int x) {
    if (x == 0)
        tri[y][x] = (tri[y][x] + tri[y - 1][x]);
    else
        tri[y][x] = (tri[y][x] + tri[y - 1][x - 1]) > (tri[y][x] + tri[y - 1][x]) ? (tri[y][x] + tri[y - 1][x - 1]) : (tri[y][x] + tri[y - 1][x]);
}

int main() {
    //피라미드 크기입력
    scanf("%d", &m);
    //피라미드 입력
    for (int j = 0; j < m; j++) {
        for (int i = 0; i <= j; i++) {
            scanf("%d", &num);
            tri[j][i] = num;
        }
    }
    //top-down 더하기
    for (int i = 1; i < m; i++) {
        for (int j = 0; j <= i; j++) 
            adder(i, j);
    }
    //최대값 저장
    for (int i = 0; i < m; i++) {
        if (tri[m - 1][i] > num)
            num = tri[m - 1][i];
    }
    //최대값 출력
    printf("%d", num);

    return 0;
}