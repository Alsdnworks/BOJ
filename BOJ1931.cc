#include<bits/stdc++.h>
//1931번: 회의실 배정
//pair로 입력받은 회의리스트를 순서대로 sort후 가장 가까운 회의시간을 탐색한다.
//sort기준인 fnc는 회의 종료시간을 우선적으로 정렬하며 동일 동료시간의 경우 회의 시작시간으로 정렬
//빨리 시작할 수 있는 다음 회의를 탐색하기위함이다.
//첫회의의 종료시간부터 종료시간에 가까운 다음 회의의 시작시간을 탐색하며 탐색된 회의의 수를 a로 증가시킨다.
using namespace std;
vector<pair<int, int>>v;
int i = 0, n, a, b;
bool fnc(pair<int, int>a, pair<int, int>b) {
	if (a.second != b.second)	return(a.second < b.second);
	else 	return(a.first < b.first);
}
int main() {
	v.reserve(100000);
	cin >> n;
	for (; i < n; i++) {
		cin >> a >> b;
		v.push_back((pair<int, int>(a, b)));
	}
	sort(v.begin(), v.end(), fnc);
	b = v[0].first;
	a = 0;
	for (i = 0; i < n; i++)
		if (v[i].first >= b) {
			b = v[i].second;
			a++;
		}
	cout << a;
	return 0;
}