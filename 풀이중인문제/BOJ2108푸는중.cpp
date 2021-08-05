#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<utility>
#include <algorithm>
#include<cmath>
using namespace std;
vector<pair<int, int>>v;
int rep; int range; int x;
int sum = 0; int j = 0; int i = 0;
bool sortB(pair<int, int>a, pair<int, int>b) {
	if (a.second != b.second)	return(a.second > b.second);
	else 	return(a.first < b.first);
}
int main() {
	v.reserve(500003);
	scanf("%d", &rep);
	for (i = 0; i < rep; i++) {
		scanf("%d", &x);
		v.push_back((pair<int, int>(x, 0)));
		sum += x;
	}
	sort(v.begin(), v.end());
	range = (v.back().first) - (v.front().first);
	for (i = 0; i < rep; i++) {
		if (i == 0)
			v[i].second = 0;
		else if (v[i].first != v[i - 1].first) {
			j = 0;
			v[i].second = 0;
		}
		else {
			j++;
			v[i].second = j;
		}
	}
	printf("%.0f\n", double(sum / rep));
	printf("%d\n", v[round(rep / 2)].first);
	sort(v.begin(), v.end(), sortB);
	if (v.size() == 1 || v[0].second > v[1].second)
		printf("%d\n", v[0].first);
	else
		printf("%d\n", v[1].first);
	printf("%d\n", range);
	return 0;
}