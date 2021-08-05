#include<bits/stdc++.h>
int f(int n) {int o=1,m_n=n;for (; n != 1; n--) o *= n; return o;}int main() { int n, k; std::cin >> n >> k; std::cout << f(n) / (f(k) * f(n - k)); return 0; }