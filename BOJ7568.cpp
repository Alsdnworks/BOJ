#include <iostream>
#include<vector>
#include<tuple>
using namespace std;
vector<tuple<int, int, int>> v;
int main() {
	v.reserve(99); int r, i;
	cin >> r;
	for (i = 0; i < r; i++) {
		int x, y;
		cin >> y >> x;
		v.push_back((tuple<int, int, int>(x, y, 1)));
	}
	for (i = 0; i < r; i++) 
		for (int j = 0; j < r; j++) 
			if (get<0>(v[j]) < get<0>(v[i]) && get<1>(v[j]) < get<1>(v[i])) 
				get<2>(v[j])++;
	for (i = 0; i < r; i++) 
		cout << get<2>(v[i]) << endl;
	return 0;
}