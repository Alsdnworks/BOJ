#include <iostream>

using namespace std;
int buffer[30] = { 0,1 };
int temp = 2;

void fib(int number) {
    if (number == 0 || number < temp || number == 1)
        return;
    buffer[temp] = buffer[temp - 1] + buffer[temp - 2];
    temp++;
    fib(number);
}

int main() {
    int mainMenuSet;
    cin >> mainMenuSet;
    fib(mainMenuSet);
    cout << buffer[mainMenuSet];
    return 0;
}