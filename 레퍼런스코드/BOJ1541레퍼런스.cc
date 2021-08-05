#include<cstdio>
using namespace std;
int main() {
	int s = 0, b = 1;
	while (1) {
		int x; char c;
		scanf("%d%c", &x, &c);
		s += x * b;
		if (c == '-')b = -1;
		else if (c != '+')break;
	}
	printf("%d", s);
}