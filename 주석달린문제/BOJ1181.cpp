#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include <algorithm>
#include <string>
//1181번: 단어정렬
//rep만큼 반복 버퍼에 단어를 받아 벡터 푸시백후 sortleng함수로 sort하여 
//문제의 조건에 맞는 정렬을 한다. 출력시 전의 값과 같은 단어가 아니라면 출력한다.
using namespace std;
vector<string> v;
bool sortLeng(const string& a, const string& b) {
	if (a.length() != b.length())//길이우선비교, 같다면 compare
		return(a.length() < b.length());
	else return(a.compare(b) < 0);
}
int main() {
	v.reserve(20000);
	int rep;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		char buffer[50];
		scanf("%s", &buffer);
		v.push_back(string(buffer));
	}
	sort(v.begin(), v.end(), sortLeng);//함수로정렬
	printf("%s\n", v[0].c_str());
	for (int i = 1; i < v.size(); i++) //전과동일한단어면 패스
		if (v[i] != v[i - 1])
			printf("%s\n", v[i].c_str());
	return 0;
}