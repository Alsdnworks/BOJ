#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
    int in;
    int count = 0;int slot = 0; int digi;
    int i = 0;int m_i;
    scanf("%d", &in);
    while (in != count) {
        m_i = i;
        while (m_i != 0) {
            digi = m_i % 10;
            m_i = m_i / 10;
            if (digi == 6) {
                slot++;
            }
            else if (slot != 0)
                slot = 0;
            if (slot == 3) {
                count++;
            }
        }
        i++;
        slot = 0;
    }
    printf("%d", i - 1);
    return 0;
}