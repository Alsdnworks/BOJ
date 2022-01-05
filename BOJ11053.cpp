#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
vector <int> lw;
vector <int> aw;
vector<int>::iterator iter;
int n;
int main() {
    scanf("%d", &n);
    lw.reserve(n+1);
    aw.reserve(n+1);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        lw.push_back(x);
    }
    aw.push_back(0);
    aw.push_back(lw[0]);
    for (int i = 1; i < n; i++) {
        if (aw.back() < lw[i]) {
            aw.push_back(lw[i]);
        }
        else if (aw.back() > lw[i]) {
            auto it = lower_bound(aw.begin(), aw.end(), lw[i]);
            *it = lw[i];
        }        
    }
    printf("%d ", aw.size() - 1);
    return 0;
}