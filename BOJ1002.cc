#include <iostream>
#include <cmath>
#include <algorithm>
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