#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, a, min = 1000001, max = -1000001;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (min > a)
            min = a;
        if (max < a)
            max = a;
    }
    cout << min << " " << max;

    return 0;
}