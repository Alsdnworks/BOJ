#include<bits/stdc++.h>
using namespace std;
//1037번: 약수
//1을 제외한 진약수(A)가 모두 주어지는경우
//첫번째 진약수와 마지막 진약수의 곱은 N인 특성을 이용하였다.
//진약수를 모두 입력 받은 후 sort해 v.front*v.back을 출력한다. 

vector<int>v;
int n, a;
int main() {
	cin >> n;
	for (; n > 0; n--) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v.front() * v.back();
	return 0;
}