#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<utility>
#include <algorithm>
using namespace std;
vector<pair<int, string>> v;
bool regeList(pair<int, string>a, pair<int, string>b) {
	return(a.first < b.first);
}
int main() {
	v.reserve(100000);
	int rep;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		int x;
		char y[103];
		scanf("%d %s", &x, &y);
		v.push_back((pair<int, string>(x, y)));
	}
	stable_sort(v.begin(), v.end(),regeList);
	for (int i = 0; i < v.size(); i++)
		printf("%d %s\n", v[i].first, v[i].second.c_str());
	return 0;
}
//틀린이유: 이름의 배열크기....