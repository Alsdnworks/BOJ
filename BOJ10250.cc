#include<bits/stdc++.h>
//�׽�Ʈ�������� ����  r�� �Է¹޴´�
//w���� ���õǸ� YXX YYXX�� ���·� ���� ȣ���� ǥ���ϱ⿡ Y(i)��  n mod h==0?�� true�϶� h�̸� �����̸� n modh�� �״�� ����Ѵ�.
//XX�� 1�� �ڸ��� 0 �϶� 0X�� ǥ���ؾ��ϹǷ� %02d�� ǥ���ؾ��Ѵ�.
using namespace std;
int r, h, w, n, i;
int main() {
	cin >> r;
	for (; r>0; r--) {
		cin >> h >> w >> n;
		n % h == 0? w = 0, i = h : w = 1,i=n%h;
		printf("%d%02d\n", i, n / h+w );
	}
	return 0;
}