#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//2978번: 블랙잭
//a와 b는 2중 for문을 통해 받고 c는 bruteForce에서 받으며 각 카드는 중복되지않도록한다.
//더한값인 m_sum이 sum보다 크고 maxN보다 작다면 sum에 저장한다
using namespace std;
int inputN;
int contextN[100];
int maxN;
int sum = 0;

void bruteForce(int a, int b, int c, int m_sum) {
    if (c > 0) {
        if (m_sum > sum && m_sum <= maxN) {
            sum = m_sum;
        }
        return;
    }
    for (int i = 0; i < inputN; i++) {
        if (a == contextN[i] || b == contextN[i])
            continue;
        m_sum = a + b + contextN[i];
        c = contextN[i];
        bruteForce(a, b, c, m_sum);
    }
}

int main() {
    int i = 0;
    int j = 0;
    //입력부
    scanf("%d %d", &inputN, &maxN);
    for (i = 0; i < inputN; i++) {
        scanf("%d", &contextN[i]);
    }
    for (i = 0; i < inputN; i++) {
        for (int j = 0; j < inputN; j++) {
            if (contextN[i] == contextN[j])
                continue;
            bruteForce(contextN[i], contextN[j], 0, 0);
        }
    }
    printf("%d", sum);
    return 0;
}