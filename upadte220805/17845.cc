#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
//가치율 무게,가치 수만큼->가치율문제있어서안씀
int n, k, w, v;
int cur[100005] = { 0, };
vector <pair<int, int>> dat;
int main() {
    dat.reserve(1005);
    scanf("%d %d", &k, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &w, &v);
        dat.push_back(make_pair(v, w));
    }
    sort(dat.begin(), dat.end());
    //가방이 버틸수있는j
    //비교-남는공간의 배열에 현재 값 더하기(foo), 현재 유지(cur[j])
    for (int i = 0; i < n; i++)
        for (int j = k; j > 0; j--)
            if (dat[i].first <= j) {
                cur[j] = max(cur[j], cur[j - dat[i].first] + dat[i].second);
            }
    printf("%d", cur[k]);
    return 0;
}