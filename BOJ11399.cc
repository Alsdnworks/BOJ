#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector <int>v;
vector<int>sum;
int n; int i;int m_sum=0;int input;
int main() {
	v.reserve(1003);
	sum.reserve(1003);
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	for (i = 0; i < n; i++) {
		m_sum += v[i];
		sum.push_back(m_sum);
	}
	m_sum = 0;
	for (i = 0; i < n; i++) {
		m_sum += sum[i];
	}
	cout << m_sum;
	return 0;
}