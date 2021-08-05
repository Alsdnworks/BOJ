#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<utility>
#include <algorithm>
//18870번: 좌표압축
//pair를 사용해 입력값과 순서를 받는다.(value,key)
//입력값을 작은수부터 정렬후 전의 내용과 동일하지않을경우(buffer) 
//j를 증가시켜서 등수를 책정하는 방식으로 좌표를 압축한다
//입력값을 기준으로 재정렬하여 출력한다.
using namespace std;
vector<pair<int, int>> v;
bool regeList(pair<int, int>a, pair<int, int>b) {
	return(a.first < b.first);
}
bool inpList(pair<int, int>a, pair<int, int>b) {
	return(a.second < b.second);
}
int main() {
	v.reserve(100000);
	int rep;
	int j = 0;
	int buffer=0;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		int x;
		scanf("%d", &x);
		v.push_back((pair<int, int>(x, i)));
	}
	sort(v.begin(), v.end(), regeList);
	for (int i = 0; i < rep; i++) {
		if (i != 0 && v[i].first != buffer) {
			buffer = v[i].first;
			j++;
			v[i].first = j;
		}
		else {
			buffer = v[i].first;
			v[i].first = j;
		}
	}
	sort(v.begin(), v.end(), inpList);
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i].first);
	return 0;
}