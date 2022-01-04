#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int buf[51][51][51] = {};
int w(int a, int b, int c) {
    if (buf[a][b][c] == 0) {
        if (a <= 0 || b <= 0 || c <= 0)
            buf[a][b][c] = 1;
        else if (a > 20 || b > 20 || c > 20)
            return w(20, 20, 20);
        else if (a < b && b < c)
            buf[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        else
            buf[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }
    return buf[a][b][c];
}
int main() {
    int a, b, c, A, B, C;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1)
            break;
        (a < 0) ? A = 0 : A = a;
        (b < 0) ? B = 0 : B = b;
        (c < 0) ? C = 0 : C = c;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(A, B, C));
    }
    return 0;
}