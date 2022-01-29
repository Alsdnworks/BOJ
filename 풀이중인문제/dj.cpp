//메모리 초과!
#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
int mins,inf = INT_MAX;
int v, e, k;
int v1, v2, w;

vector <vector<pair<int, int>>> mapper;
vector<int> buffer;

void dijkstra(int sum,int point, int dep) {
	//고립버텍스인경우
	if (mapper[point].size() == 0)
		return;
	//시작, 도착점이 같은경우
	if (point==dep) {
		buffer.push_back(0);
		return;
	}
	//현재 버텍스 내에 도착점으로 가는 에지가 있는경우
	for(int i=0;i< mapper[point].size();i++){
		if (mapper[point][i].first == dep) {
			buffer.push_back(sum + mapper[point][i].second);
			return;
		}
	}
	//둘다 아닌경우(재귀로 탐색)	
	for (int i = 0; i < mapper[point].size(); i++) {
		dijkstra(sum+ mapper[point][i].second, mapper[point][i].first, dep);
	}
}

int main() {
	scanf("%d\n%d\n%d", &v,&e,&k);
	//동적조정
	buffer.reserve(e);
	mapper.resize(v+1);
	for (int i = 0; i < e; i++) {
        scanf("%d\n%d\n%d", &v1,&v2,&w);
		mapper[v1].push_back(make_pair(v2, w));
	}
	for (int i = 1; i <= v; i++) {
		mins = inf;
		buffer.clear();
		dijkstra(0,k, i);
		for (int i = 0; i < buffer.size(); i++)if(buffer[i] < mins)mins = buffer[i];
		if (mins == inf)printf("INF\n");
		else printf("%d\n", mins);
	}
	return 0;
}