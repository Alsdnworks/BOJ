#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int main() {
	int j = 0; char in[108]; stack<char>s; {
	j = 0;
	scanf("%[^\n]s", &in);
	while (in[0] != '.') {

		if (in[j] == ')') {
			if (!s.empty())
				if (s.top() == 1) {
					s.pop();
				}

		}
		if (in[j] == ']') {
			if (!s.empty())
				if (s.top() == 2) {
					s.pop();
				}
		}
		if (in[j] == '(')
			s.push(1);
		if (in[j] == '[')
			s.push(2);
		if (s.empty())
			printf("YES\n");
		else
			printf("NO\n");
		j++;
	}

	return 0;
}