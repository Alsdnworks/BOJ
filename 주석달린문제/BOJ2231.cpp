#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
//2231번: 분해합
//입력조건은이1000000의 7자리 수 이므로 답이 나올수있는 범위는 9*7=63이므로 
//시작점을 input-64로 초기화한다.
//dcomp함수는 input보다 클경우 생성자가 없는것으로 리턴되어 0으로 출력된다.
//dcomp함수는 lentest와 lenbuffer변수를 통해 자리수별로 스택에 저장되며 comptest에 자리수별로 더해진후 
//input과 일치하지못하면 nTest에 +1되며 일치할경우 출력으로 리턴하어 출력된다. 
using namespace std;

int input;
int output = 0;
stack<int> digit;


void dcomp(int nTest) {
    int lentest = nTest; int compTest = nTest;
    int lenBuffer = 0;
    if (nTest > input)
        return;

    while (lentest != 0) {
        digit.push(lentest % 10);
        lentest /= 10;
        lenBuffer++;
    }

    while (digit.empty() == 0) {
        compTest += digit.top();
        digit.pop();
    }

    if (compTest == input) {
        output = nTest;
        return;
    }
    else
        dcomp(nTest + 1);
}
int main() {
    int start = 0;
    scanf("%d", &input);
    if (input > 65)
        start = input - 64;
    dcomp(start);
    printf("%d", output);
    return 0;
}