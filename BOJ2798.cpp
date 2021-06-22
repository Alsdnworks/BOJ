#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>

using namespace std;

int inputN;
int contextN[100];
int maxN;

int sum=0;

void bruteForce(int a,int b,int c, int m_sum) {
    if (c > 0) {
        if (m_sum > sum && m_sum <= maxN) {
            sum = m_sum;
        }
        
        
        return;
    }

    for (int i = 0; i < inputN; i++) {
        if (a == contextN[i]|| b == contextN[i])
            continue;
        m_sum = a + b +contextN[i];

        if (a == 0)a = contextN[i];
        else if(b == 0)b= contextN[i];
        else c= contextN[i];
        bruteForce(a, b, c, m_sum);
        
    }
    
}

int main() {
    int i = 0;
    int j = 0;
    scanf("%d %d", &inputN, &maxN);
    for (i = 0; i < inputN; i++) {
        scanf("%d", &contextN[i]);
    }
    for (i = 0; i < inputN; i++) {
        for (int j = 0; j < inputN; j++) {
            if (contextN[i]==contextN[j])
                continue;
            bruteForce(contextN[i], contextN[j], 0, 0);
        }
    }
    printf("%d", sum);
    return 0;
}