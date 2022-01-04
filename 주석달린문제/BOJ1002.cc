#include <bits/stdc++.h>
//1002번: 터렛 
//rep 만큼 반복. 소문자,대문자원의 중점 죄표와 원의 반지름이 주어진다.
//두 원의 위치관계를 통해 몇개의 점에서 만나는지알수있다.
//참고자료 https://mathbang.net/101
using namespace std;
int main() {
	int rep;
	cin >> rep;
	for (int i = 0; i < rep; i++) {
		double a, b, r, A, B, R, dist;
		cin >> a >> b >> r >> A >> B >> R;
		if (r > R)swap(r, R);
		dist = sqrt(pow(A - a, 2) + pow(B - b, 2));
		if (dist == 0 && r == R)cout << -1;
		else if ((r + R > dist) && (R - r < dist)) cout << 2;
		else if ((r + R == dist) || (R - r == dist))cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}