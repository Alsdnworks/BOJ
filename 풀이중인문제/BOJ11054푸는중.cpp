#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
vector <int> lw;
vector <int> aw;
vector <int> bw;
vector <int> cw;
vector <int> dw;
int counter=0;
int arr[2][1001] = {{},{}};
int n;
int main() {
    scanf("%d", &n);
    lw.reserve(n + 1);
    aw.reserve(n + 1);
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
            int tis=abs(aw.begin() - it);
            *it = lw[i];
        }   
    }
    aw.erase(aw.begin());
    int ind = 0;
    for (int i = 0; i < aw.size(); i++) {
        for (int j = ind; j < lw.size();j++) {
            if (aw[i] == lw[j]) {
                ind = j;
                arr[0][j] = lw[j];
                break;
            }
        }
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
    bw.erase(bw.begin());
    ind = 0;
    for (int i = 0; i < bw.size(); i++) {
        for (int j = ind; j < lw.size(); j++) {
            if (bw[i] == lw[j]) {
                ind = j;
                arr[1][j] = lw[j];
                break;
            }
        }
    }
    int flag = 0;
    int j = 0;
    reverse(arr[1], arr[1]+lw.size());
    for (int i = 0; i <= lw.size(); i++) {
        flag = 0;
        for (j = 0; j < i; j++) {
            if (arr[0][j] != 0) {
                dw.push_back(arr[0][j]);
            }
        }
        for (int k = j; k < lw.size(); k++) {
            if (arr[1][k] != 0) {
                dw.push_back(arr[1][k]);
            }
        }
        for (int m = 0; m < dw.size(); m++) {
            if (m == 0)flag++;
            if (m != 0) {
                if (dw[m] != dw[m - 1])
                    flag++;
            }
        }
        cw.push_back(flag);
        dw.clear();
    }
    printf("%d", *max_element(cw.begin(), cw.end()));
    return 0;
}