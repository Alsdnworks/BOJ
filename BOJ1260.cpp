#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
vector<int> graph[1003], DFSbuffer, BFSbuffer, BFS_Fbuffer;
int vCount, eCount, v, a, b, i, quTemp;
deque<int> BFS_Vbuffer;

void DFS(int v){
    DFSbuffer.push_back(v);
    for (int i = 0; i < graph[v].size(); i++){
        auto iter = find(DFSbuffer.begin(), DFSbuffer.end(), graph[v][i]);
        if (iter == DFSbuffer.end())
            DFS(graph[v][i]);
    }
    return;
}

void BFS(int v){
    BFSbuffer.push_back(v);
    while (!BFS_Vbuffer.empty()){
        for (int i = 0; i < graph[v].size(); i++){
            auto iter = find(BFS_Fbuffer.begin(), BFS_Fbuffer.end(), graph[v][i]);
            if (iter == BFS_Fbuffer.end()){
                BFS_Fbuffer.push_back(graph[v][i]);
                BFS_Vbuffer.push_back(graph[v][i]);
            }
        }
        BFS_Vbuffer.pop_front();
        for (int i = 0; i < BFS_Vbuffer.size(); i++){
            BFS(BFS_Vbuffer.front());
        }
    }
}
int main(){
    scanf("%d %d %d", &vCount, &eCount, &v);
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
    DFS(v);
    
    BFS_Vbuffer.push_back(v);
    BFS_Fbuffer.push_back(v);
    BFS(v);
    for (i = 0; i < DFSbuffer.size(); i++)
        printf("%d ", DFSbuffer[i]);
    printf("\n");
    for (i = 0; i < BFSbuffer.size(); i++)
        printf("%d ", BFSbuffer[i]);
    return 0;
}
/*
6 5 6
5 4
4 6
2 3
3 1
1 6

6 4 5 1 3 2   
6143이 정답...근데 6 4 1 5 3 2   
*/