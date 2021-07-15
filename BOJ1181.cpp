#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include <algorithm>
#include <string>
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