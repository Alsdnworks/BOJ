#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
//1018번: 체스판 다시칠하기
//정사각형의 크기M*N만큼 입력받고 input[50][50]초기화
//2중for문을 이용해 xy 8*8크기 샘플 사각형을 만들어 다시 2중 for문을 통한 i j좌표를 사용한다.
//샘플 사각형의 시작점을 기준으로 mod연산을 사용해 체스판인지 확인, 체스판규칙이 아니라면 fix를 증가시킨다.
//시작점과 반대 패턴의 예외를 처리하기위해 64-fix의 negafix변수와 fix중 더 작은 값을 사용한다.
//m_fix보다 작다면 fix로 교체해 최소 fix의 케이스를 저장할수있다.
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