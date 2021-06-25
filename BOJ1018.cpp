#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
int inputM;
int inputN;
char input[50][50];
int m_fix = 2500.0;
int fix = 0;
int nega_fix = 0;
void BWTest() {
    char buffer = 0;
    for (int y = 0; y + 7 < inputM; y++) {
        for (int x = 0; x + 7 < inputN; x++) {
            buffer = input[y][x];
            for (int i = y; i < y + 8; i++) {
                for (int j = x; j < x + 8; j++) {
                    if (i % 2 == j % 2) {
                        if (buffer != input[i][j])
                            fix++;
                    }
                    else {
                        if (buffer == input[i][j])
                            fix++;
                    }
                }
            }
            nega_fix = 64 - fix;
            if (nega_fix < fix)fix = nega_fix;
            if (fix < m_fix) {
                m_fix = fix;
                fix = 0;
            }
            fix = 0;
            nega_fix = 0;
        }
    }
}

int main()
{
    int i = 0;
    int j = 0;
    scanf("%d %d", &inputM, &inputN);
    for (i = 0; i < inputM; i++) {
        for (j = 0; j < inputN; j++) {
            scanf(" %c", &input[i][j]);
        }
    }
    BWTest();
    printf("%d", m_fix);
    return 0;
}