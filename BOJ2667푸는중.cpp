#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int board[101][101], M, N, i, j, nX, nY;
char b_buffer[101];
pair <int, int> nxt;
bool f_deadend;

void flagtest(int x, int y) {
    if (board[x][y + 1] == 1) {
        nxt.first = x; nxt.second = y + 1;
    }
    else if (board[x][y - 1] == 1) {
        nxt.first = x; nxt.second = y - 1;
    }
    else if (board[x + 1][y] == 1) {
        nxt.first = x + 1; nxt.second = y;
    }
    else if (board[x - 1][y] == 1) {
        nxt.first = x - 1; nxt.second = y;
    }
    else f_deadend=true;
}

void BST(int x, int y, int lvl) {
    while(1){
    if(f_deadend==true){
        f_deadend=false;
        if (x != 0 || y != 0) {
        board[x][y] = lvl;
        }
        return;
    }
    if (x == N && y == M) {
        nxt.first = x; nxt.second=y;
        return;
    }
    if (x != 0 || y != 0) {
        board[x][y] = lvl;
    }
    flagtest(x, y);
    BST(nxt.first, nxt.second, ++lvl);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) {
        scanf("%s", &b_buffer);
        for (j = 0; j < M; j++) {
            board[i][j] = (int)b_buffer[j]-48;
        }
    }
    board[0][0] = 100;
    BST(0, 0, 1);
    return 0;
}