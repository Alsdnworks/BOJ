#include<bits/stdc++.h>
using namespace std;
pair<int, int>v[100000];
long long m = 0; int n,i,j,d;
int main() {
	d = 0;
	cin>>n;
	for(i=0;i<n-1;i++)
		cin>>v[i].second;
	v[n].second = 0;
	for (i = 0; i < n; i++)
		cin>>v[i].first;
	for (i = 0; i < n;) {
		while (v[i].first<=v[j].first) {
			d += v[j].second;j++;
		}
		m += (long long)d * v[i].first;
		i = j;d = 0;
	}
	cout<<m;
	return 0;
}