#include<bits/stdc++.h>
//1259번: 팰린드롬수
// n으로 0이 입력되면 종료
//i와 j변수는 strlen을 통해 얻은 char의 문자번호를 받는다
//i와 j를 증감시키며 n을 탐색하며 i!=j인경우 flag를 1로 바꾸고 탐색후
//no를 출력하며 f를 0으로 초기화한다.
using namespace std;
char n[6];int i, j, f;
int main() {
	while (1) {
		cin >> n;
		if (n[0] == '0')break;
		for (int i = 0, j = strlen(n) - 1; i <= strlen(n)-1; i++) {
			if (n[j] != n[i]) f = 1;
			j--;
		}
			f == 1 ? f = 0,cout << "no\n" : cout << "yes\n";
	}
	return 0;
}