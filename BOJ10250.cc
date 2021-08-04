#include<bits/stdc++.h>
//테스트데이터의 수인  r을 입력받는다
//w값은 무시되며 YXX YYXX의 형태로 층과 호수를 표기하기에 Y(i)는  n mod h==0?가 true일때 h이며 거짓이면 n modh를 그대로 사용한다.
//XX는 1의 자리가 0 일때 0X로 표기해야하므로 %02d로 표기해야한다.
using namespace std;
int r, h, w, n, i;
int main() {
	cin >> r;
	for (; r>0; r--) {
		cin >> h >> w >> n;
		n % h == 0? w = 0, i = h : w = 1,i=n%h;
		printf("%d%02d\n", i, n / h+w );
	}
	return 0;
}