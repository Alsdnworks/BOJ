#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int fibo[5000] = { 0,1,1 };
int func(int in) {
    if (in==0||fibo[in] != 0)
        return fibo[in];
        fibo[in] = func(in - 1) + func(in - 2);
    return fibo[in];
}
int main() {
        int ins = 0, abc = 0;
        scanf("%d", &ins);
        abc = func(ins);
        cout << abc << endl;
        return 0;
}