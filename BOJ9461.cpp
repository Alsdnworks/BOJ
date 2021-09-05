#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
long long int DP[500] = { 1,1,1,2,2 };
int in, tr;
//9461 파도반 수열 
//파도반수열은 DP[N]=DP[N-1]+DP[N-5]의 규칙을 따르고있다. i는 4부터
int main() {
	scanf("%d", &in);
	for (int i = 0; i < in; i++) {
		scanf("%d", &tr);
		for (int j = 4; j <tr; j++) {
			if (DP[j] == 0)
				DP[j] = DP[j - 1] + DP[j - 5];
		}
		printf("%lld\n", DP[tr-1]);
	}
	return 0;
}
