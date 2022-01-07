#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int q[65][65];
int n;
string s;
void qt(int lv, int x, int y) {
    int size;
    size =(2* lv);
    int c;
    c = q[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (size != 1 && c != q[i][j]) {
                s += '(';
                qt(lv /2, x, y);
                qt(lv /2, x, y + lv);
                qt(lv /2, x + lv, y);
                qt(lv /2, x + lv, y + lv);
                s += ')';
                return;
            }
        }
    }
    s += to_string(c);
}

int main() {
    int n;
    string in[4097];
    scanf("%d", &n);
    for (int m = 0; m < n; m++) {
        cin >> in[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            q[i][j] = int(in[i][j] - 48);
        }
    }
    qt(n/2, 0, 0);
    cout << s;
    return 0;
}

