#include <iostream>

using namespace std;
int buffer = 1;

void factorial(int number) {
    int temp = number;
    if (temp == 0)
        return;
    buffer *= temp;
    temp--;
    factorial(temp);
}
int main() {
    int mainMenuSet;
    cin >> mainMenuSet;
    factorial(mainMenuSet);
    cout << buffer;
    return 0;
}