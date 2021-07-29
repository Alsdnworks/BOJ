#include<bits/stdc++.h>
using namespace std;
int main() {
	int r,j;char in[53];
	cin>>r;
	for (int i = 0; i < r; i++) {
		cin>>in;
		stack<int>s;j = 0;
		while (in[j]!='\0') {
			if (in[j] == ')') {
				if (s.empty()) {
					s.push(2);
					break;
				}
				s.pop();
			}
			if (in[j] == '(') 
				s.push(1);
			j++;
		}
		if (s.empty() == 1)
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}