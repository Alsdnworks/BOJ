#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int buffer[1001][3];
int in, cost;
int main() {
    scanf("%d", &in);
    for (int i = 0; i < in; i++) {
        scanf("%d %d %d", &buffer[i][0], &buffer[i][1], &buffer[i][2]);   
    }
    for (int i = 1; i <= in; i++) {
        buffer[i][0] += min(buffer[i - 1][1], buffer[i - 1][2]);
        buffer[i][1] += min(buffer[i - 1][0], buffer[i - 1][2]);
        buffer[i][2] += min(buffer[i - 1][0], buffer[i - 1][1]);
    }
    printf("%d", min(buffer[in][2],min(buffer[in][0], buffer[in][1])));
    return 0;
}