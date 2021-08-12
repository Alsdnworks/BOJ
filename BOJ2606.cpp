#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
vector<int> graph[105], DFSbuffer;
int vCount, eCount, a, b, i;
void DFS(int v){
    DFSbuffer.push_back(v);
    for (int i = 0; i < graph[v].size(); i++){
        auto iter = find(DFSbuffer.begin(), DFSbuffer.end(), graph[v][i]);
        if (iter == DFSbuffer.end())
            DFS(graph[v][i]);
    }
    return;
}

int main(){
    scanf("%d %d", &vCount, &eCount);
    for (i = 0; i < vCount; i++)
        graph[i].reserve(eCount);
    for (i = 0; i < eCount; i++){
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (i = 0; i <= vCount; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    DFS(1);
    printf("%d",DFSbuffer.size()-1);
    return 0;
}