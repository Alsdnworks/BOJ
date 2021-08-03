#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//1436번: 영화감독 숌
//in으로 입력받는 번호만큼 while반복문내에서 브루스포스를 반복한다.
//증가하는 수는 i이며 수가 조건을 만족하는지 확인하기위한 i=m_i, digi변수를 사용한다.
//6이 나올때 slot를 증가시키며 도중 6이 아닌수가있을경우 슬롯 초기화
//slot이 3개(666조건)을 만족시킬경우 count를 증가- 이하과정 반복
using namespace std;
int main() {
    int in;
    int count = 0; int slot = 0; int digi;
    int i = 0; int m_i;
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