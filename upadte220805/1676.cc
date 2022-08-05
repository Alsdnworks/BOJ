#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int c=0;
    int n=0;
    scanf("%lld",&n);
    if (n!=0) {
        for (long long int i = 2; i <= n; i++) {
            if (i % 5 == 0)c++;
            if (i % 25 == 0)c++;
            if (i % 125 == 0)c++;
        }
    }
    printf("%d", c);
    return 0;
}