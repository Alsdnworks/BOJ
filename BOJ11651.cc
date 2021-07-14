#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<utility>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v;
int main() {
	v.reserve(100000);
	int rep;
	scanf("%d",&rep);
	for (int i = 0; i < rep; i++) {
		int x, y;
		scanf("%d %d", &y,&x);
		v.push_back((pair<int, int>(x, y)));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++){
		printf("%d %d\n", v[i].second, v[i].first);
	}
	return 0;
}