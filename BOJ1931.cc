#include<bits/stdc++.h>
//1931��: ȸ�ǽ� ����
//pair�� �Է¹��� ȸ�Ǹ���Ʈ�� ������� sort�� ���� ����� ȸ�ǽð��� Ž���Ѵ�.
//sort������ fnc�� ȸ�� ����ð��� �켱������ �����ϸ� ���� ����ð��� ��� ȸ�� ���۽ð����� ����
//���� ������ �� �ִ� ���� ȸ�Ǹ� Ž���ϱ������̴�.
//ùȸ���� ����ð����� ����ð��� ����� ���� ȸ���� ���۽ð��� Ž���ϸ� Ž���� ȸ���� ���� a�� ������Ų��.
using namespace std;
vector<pair<int, int>>v;
int i = 0, n, a, b;
bool fnc(pair<int, int>a, pair<int, int>b) {
	if (a.second != b.second)	return(a.second < b.second);
	else 	return(a.first < b.first);
}
int main() {
	v.reserve(100000);
	cin >> n;
	for (; i < n; i++) {
		cin >> a >> b;
		v.push_back((pair<int, int>(a, b)));
	}
	sort(v.begin(), v.end(), fnc);
	b = v[0].first;
	a = 0;
	for (i = 0; i < n; i++)
		if (v[i].first >= b) {
			b = v[i].second;
			a++;
		}
	cout << a;
	return 0;
}