#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
int t,n;
priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
vector<int>outbuffer;
int main() {
    scanf("%d", &t);
    outbuffer.reserve(t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        
        if (n == 0) {
            if (!pq.empty()) {
                outbuffer.push_back((pq.top().first * (pq.top().second )));
                pq.pop();
            }
            else outbuffer.push_back(0);
        }
        else {
            if (n < 0)pq.push(make_pair(abs(n), -1));
            else pq.push(make_pair(n, 1));
        }
    }
    for (int i = 0; i < outbuffer.size(); i++)
        printf("%d\n",outbuffer[i]);
    return 0;
}