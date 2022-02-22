//18185라면 사기(Small)
//11835Skyline
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n,m,r,o=0;
void d_(int i, int r) {
	v[i] -= r;
	v[i + 1] -= r;
	o += r * 5;
}
int main() {
	//케이스의 수만큼 벡터에 저장하고 out_of_range를 피하기위해 2개의 더미를 넣는다.
	cin>>n;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
		cin>>m;
		v.push_back(m);
	}
	v.push_back(0);v.push_back(0);
	
	for (int i = 0; i < n; i++) {
		if (v[i] == 0)
			continue;
		//현위치에서 +1,+2가 존재할경우 그중 가장 작은 수만큼 3개씩 뺀다 
		if (v[i + 1] != 0 && v[i + 2] != 0) {
			
			//단 +1이 더 큰경우 +2와 수를 맞춰줘야 더 greedy한 계산이 가능하다, 단 현위치의 수를 고려해 v[i], v[i + 1] - v[i + 2]중 min을 사용
			if (v[i + 1] > v[i + 2]) {
				r = min(v[i], v[i + 1] - v[i + 2]);
				d_(i, r);
			}

			r = min(v[i], min(v[i + 1], v[i + 2]));
			v[i] -= r;
			v[i + 1] -= r;
			v[i + 2] -= r;
			o += r * 7;
		}
		//계산후 v[i]이 남아있는경우 2개씩, 1개씩 계산해준다. 어차피 0개면 o의 추가 값은 없으므로 조건문은  필요없다.
		r = min(v[i], v[i + 1]);
		d_(i, r);
		o += v[i] * 3;
		v[i] = 0;
	}
	cout << o;
	return 0;
}