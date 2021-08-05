#include <iostream>
//3009번: 네 번째 점
//직각사각형을 만들기위한 나머지 하나의 점의 x,y좌표는 각 좌표에 하나만 있는 좌표와 동일하다. 
using namespace std;
int a[3], b[3]; 
int main(){
	for (int i = 0; i < 3; i++)
		cin >> a[i] >> b[i];
	if (a[0] == a[1])
		cout << a[2];
	else if (a[1] == a[2])
		cout << a[0];
	else {
		cout << a[1];
	}
	cout << " ";
	if (b[0] == b[1])
		cout << b[2];
	else if (b[1] == b[2])
		cout << b[0];
	else cout << b[1];return 0;}