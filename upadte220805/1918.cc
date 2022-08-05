//1918 후위표기식
#include<bits/stdc++.h>
using namespace std;

stack <char> operands; //연산자
string strs; //입력
string output; //출력
bool flag=false;//다음 pass에서 연산자 스택을 어펜드 후 비운다->미사용

void clearStack() {
	output.push_back(operands.top());
	operands.pop();
}

int main() {
	cin >> strs;

	for (int i = 0; i < strs.size(); i++) {
		if (strs[i] >= 65 && strs[i] <= 90) {
			output.push_back(strs[i]);
		}
		else {
		//괄호나 특수문자를 우선순위에따라 저장하고 * /과 같은 우선순위 연산자 이후에 output에 append 한 후 pop시킨다
		//우선순위 구현은 while사용해 pass하는 연산자를 다르게 지정 가능하도록
		// 이때 기존에 사용하던 flag를 미사용하고 clearstack실행후 push시킴으로 해결
		//괄호는 나머지 구현후 ??->+ -랑 같은 케이스로 쳐주면될듯
		//empty case고려해야함
			if (strs[i] == '(') {
				operands.push('(');
			}
			else if (strs[i] == '+' || strs[i] == '-') {
				while (!operands.empty() && operands.top()!='(') {
						clearStack();
				}
				operands.push(strs[i]);
			}
			else if (strs[i] == '*' || strs[i] == '/') {
				while (!operands.empty() && ((operands.top() == '*' || operands.top() == '/'))) {
					clearStack();
				}
				operands.push(strs[i]);
			}
			else if (strs[i] == ')') {
				while (!operands.empty() && operands.top() != '(') {
					clearStack();
				}
				operands.pop();
			}
		}
	}
	while (!operands.empty()) 
		clearStack();

	cout << output;

	return 0;
}