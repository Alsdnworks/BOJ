#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int iter, in, fiboBuffer[41] = { 0,1 };
int main() {
    scanf("%d", &iter);
    for (int i = 0; i < iter; i++) {
        scanf("%d", &in);
        if (in == 0) printf("1 0\n");
        else {
            for (int i = 2; i <= in; i++) {
                if (fiboBuffer[i] == 0)
                    fiboBuffer[i] = fiboBuffer[i - 2] + fiboBuffer[i - 1];
            }

            printf("%d %d\n", fiboBuffer[in - 1], fiboBuffer[in]);
        }
    }
    return 0;
}