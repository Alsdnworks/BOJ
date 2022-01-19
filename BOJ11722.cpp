#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
vector <int> lw;
vector <int> bw;
int n,x;
int main() {
    scanf("%d", &n);
    lw.reserve(n);
    bw.reserve(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        lw.push_back(x);
    }
    reverse(lw.begin(), lw.end());
    bw.push_back(0);
    bw.push_back(lw[0]);
    for (int i = 1; i < n; i++) {
        if (bw.back() < lw[i]) {
            bw.push_back(lw[i]);
        }
        else if (bw.back() > lw[i]) {
            auto it = lower_bound(bw.begin(), bw.end(), lw[i]);
            *it = lw[i];
        }
    }
    printf("%d", bw.size()-1);
    return 0;
}