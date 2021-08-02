#include <iostream>
#include<cctype>
#include<algorithm>
#include <string>
#include <stack>
#include<cmath>
//1541번: 잃어버린 괄호
//가장 작은 수를 만들기위해선 -되는 수가 최대여야한다. 따라서 -를 만나면 괄호로 묶어주는 형식을
// 사용해 a-(b+c)-(d)의 형태로 만들어준다. 
using namespace std;
int main() {
	int buffer = 0; int j = 0; int m_sum = 0;
	//buffer에 int로 변환된 수 저장, 자리수를 저장할 j,
	//-를 만나기전까지의 수를 저장할 m_sum
	stack<int>v;
	string input;
	cin >> input;
	reverse(input.begin(), input.end());
	for (int i = 0; i < (input.length()); i++) {
		if (isdigit(input[i]) == 0) {
			if (input[i] == '+')//+라면 m_sum에 가산함
				m_sum += buffer;
			else {
				m_sum += buffer;//-를 만나면 m_sum을 push시키고 내용 초기화
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
	while (v.empty() == false) {//-를 처음만나기전의 m_sum에서 이후의 m_sum을 뺀다
		m_sum -= v.top();
		v.pop();
	}
	cout << m_sum;
	return 0;
}