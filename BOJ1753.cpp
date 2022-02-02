#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
//모든 간선간거리는 inf로 초기화, inf는 문제에서 나올수있는 최대거리 max(w)*max(e)+1
int inf = 3000001;
//버텍스,에지,시작점
int v, e, k;
//매핑을 위한 임시저장소, pair(출발점pair(가중치, 도착점)), 도착점까지거리
priority_queue<pair<int, int>> mapper;
vector<pair<int, int>> map_buffer[300001];
int wei_buffer[20001];
//시작버텍스(arr),도착버텍스(dep),가중치
int v1, v2, w;

int main() {
	fill_n(wei_buffer, 20001, inf);
	scanf("%d %d %d", &v, &e, &k);
	for (int i = 0; i < e; i++) {
		scanf("%d %d %d", &v1, &v2, &w);
		map_buffer[v1].push_back(make_pair(w,v2));
	}
	wei_buffer[k] = 0;		
	mapper.push(make_pair(0, k));

	//i 값으로부터 주변 노드의 값을 계산하면 된다
	//도착지는 ind
	while (!mapper.empty()) {
		int arr_vert = mapper.top().second;
		mapper.pop();
		for (int edge = 0; edge < map_buffer[arr_vert].size(); edge++) {
			int dep_vert = map_buffer[arr_vert][edge].second;
			int old = wei_buffer[dep_vert];
			int current = wei_buffer[arr_vert] + map_buffer[arr_vert][edge].first;
			if (current < old) {
				mapper.push(make_pair(-current, dep_vert));
				wei_buffer[dep_vert] = current;
			}
		}
	}

	for (int i = 1; i <= v; i++) {
		if (wei_buffer[i] == inf)
			printf("INF\n");
		else
			printf("%d\n", wei_buffer[i]);
	}
	return 0;
}