#include <iostream>
#include<cctype>
#include<algorithm>
#include <string>
#include <stack>
#include<cmath>
using namespace std;
int main() {
	int buffer = 0; int j = 0; int m_sum = 0; int m_digit = 0;
	stack<int>v;
	string input;
	cin >> input;
	reverse(input.begin(), input.end());
	for (int i = 0; i < (input.length() ); i++) {
		if (isdigit(input[i]) == 0) {
			if (input[i] == '+')
				m_sum += buffer;
			else {
				m_sum += buffer;
				v.push(m_sum);
				m_sum = 0;
			}
			j = 0; buffer = 0;
		}
		else {
			buffer += (((double)input[i] - 48) * pow(10, j)); 
			j++;
		}
	}
	m_sum += buffer;
	v.push(m_sum);
	m_sum = 0;
	m_sum += v.top();
	v.pop();
	while (v.empty()==false) {
		m_sum -= v.top();
		v.pop();
	}
	cout << m_sum;
	return 0;
}