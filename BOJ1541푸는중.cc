#include<iostream>
#include<vector>
#include<cctype>
#include<cmath>
using namespace std;
string input;
vector<int>st;
int i=0; int j=0; int m_sum = 0; int m_digit = 0;
int main() { 
	cin >> input;
	while (i<=input.size()) {
		j = 0;
		while (isdigit(input[i]) != 0) {
			if (input[i]!='0')
				m_digit += (input[i] - 48) * (int)pow(10, j);
			else m_digit*=1* (int)pow(10, j);
			j++;
			i++;
		}
		if (input[i] == '-') {
			m_sum += m_digit;
			st.push_back(m_sum);
			m_digit = 0;
			m_sum = 0;
		}
		i++;
	}
	m_sum += m_digit;
	st.push_back(m_sum);
	i = st.size();
	m_sum = st.front();
	while (i > 1) {
		m_digit = st[i-1];
		if (st.empty() == false) {
			m_sum -= m_digit;
			i--;
		}
	}
	cout << m_sum; 
	return 0;
}
/*4 - (3 + 4 + 2 - (2 + 3) - (4 + 2)) = 4 - 9 - 5 - 6 = -16
각 괄호는 스택 위치로 구분된다
(중요)펜 떨어트린거 안보이는데 담배피러갈때 찾기
따라서 각 스택의 원소만큼 sum = 0에 뺄샘해주고 마지막은 더한다.
4 2
2 3
3 4 2
4
0 - 6 - 5 - 9 + 4 = -16
*/