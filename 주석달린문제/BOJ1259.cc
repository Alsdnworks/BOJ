#include<bits/stdc++.h>
//1259��: �Ӹ���Ҽ�
// n���� 0�� �ԷµǸ� ����
//i�� j������ strlen�� ���� ���� char�� ���ڹ�ȣ�� �޴´�
//i�� j�� ������Ű�� n�� Ž���ϸ� i!=j�ΰ�� flag�� 1�� �ٲٰ� Ž����
//no�� ����ϸ� f�� 0���� �ʱ�ȭ�Ѵ�.
using namespace std;
char n[6];int i, j, f;
int main() {
	while (1) {
		cin >> n;
		if (n[0] == '0')break;
		for (int i = 0, j = strlen(n) - 1; i <= strlen(n)-1; i++) {
			if (n[j] != n[i]) f = 1;
			j--;
		}
			f == 1 ? f = 0,cout << "no\n" : cout << "yes\n";
	}
	return 0;
}