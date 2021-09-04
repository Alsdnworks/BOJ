#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
long long int fiboBuffer[1000005] = { 0,1,2},in;
int main() {
        scanf("%lld", &in);
        for (int i = 2; i <= in; i++) {
            if (fiboBuffer[i] == 0){
                        fiboBuffer[i] = fiboBuffer[i - 2] + fiboBuffer[i - 1];
                        fiboBuffer[i]%=15746;
                }
        }                                                                                                                 
        printf("%lld",(fiboBuffer[in]));
return 0;
}
