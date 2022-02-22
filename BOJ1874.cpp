#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
stack<int>st;
int m_n, i, j = 1, n = 2;
int n_buffer[100005];
bool s_buffer[200005];
int main() {
	cin >> m_n;
	for (i = 0; i < m_n; i++)
		scanf("%d", &n_buffer[i]);
	i = 0;
	s_buffer[0] = true;
	st.push(0);
	st.push(1);

	while (i < m_n) {
		//if (st.empty()) { st.push(1); }
		//if (n_buffer[i] < st.top())break;

		if (st.top() == n_buffer[i]) {
			st.pop();
			s_buffer[j] = false;
			j++;
			i++;
		}
		
		else {
			st.push(n);
			n++;
			s_buffer[j] = true;
			j++;
		}
	}
	if (st.top() == 0) {
		for (i = 0; i < j ; i++) {
			s_buffer[i] == true ? printf("+\n") : printf("-\n");
		}
	}
	else printf("NO");
	return 0;
}