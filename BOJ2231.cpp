#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>

using namespace std;

int input;
int output=0;
stack<int> digit;


void dcomp(int nTest) {
    int lentest = nTest; int compTest = nTest;
    int lenBuffer = 0;
    if (nTest > input)
        return;

    while (lentest != 0) {
        digit.push(lentest % 10);
        lentest/= 10;
        lenBuffer++;
    }

    while (digit.empty() == 0) {
        compTest+=digit.top();
        digit.pop();
    }

    if (compTest == input) {
        output = nTest;
        return;
    }
    else
    dcomp(nTest+1);
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