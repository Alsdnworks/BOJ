#include<bits/stdc++.h>
	//3107번: IPv6
	/*참고자료:https://blockdmask.tistory.com/338[[C++] [string 클래스, 문자열에 대해서 (총정리)[개발자 지망생]] 
	디코딩할 ip를 입력받는다.
	ip의 끝까지 반복하며 :(콜론) ::(더블콜론)을 만날때 함수를 사용할것이기에 첫부분에 임의로 콜론을 삽입한다.
	콜론을 만나면 콜론다음으로 이동해 다음 콜론 또는 ip의 끝까지 세그먼트(seg)에 내용을 넣어준다 처음에 벡터를 사용했으나 간결성을 위해 스트링사용
	세그먼트에 입력이 끝나면 네자리가 될때까지 0을 채워넣어준다. 세그먼트내용을 _ip에 넣어주고 초기화
	더블콜론을 만나면 콜론 다음으로 이동하고 m_ip에 더블콜론의 위치를 표시하는 '.'을 넣어준다.
	ip의 끝까지 이동하면 32자리의 수 또는 몇자리수와 '.'이 m_ip에 저장되어있다.
	총길이 32에서 ip.size()만큼 빼주고 빼준값이있다면 그만큼의 '0'을 생성해 '.'과 대치시킨다
	4자리마다 :을 삽입해 ipv6의 형태를 잡아 출력한다.*/
using namespace std;
int i = 0,n;
string _ip,ip,seg;

void pbc(int &i) {
	for (;(ip[i] != ':') && (i < ip.size());i++) {
		seg += ip[i];
	}
	while (seg.size() < 4)
		seg.insert(seg.begin(), '0');
	_ip += seg;
	seg.clear();
}
int main() {
	cin>>ip;
	ip.insert(ip.begin(),':');
	for (;i < ip.size();)
		if (ip[i] == ':' && ip[i + 1] == ':') {
			i += 2;
			_ip += '.';
			pbc(i);
		}
		else if (ip[i] == ':') {
			i++;
			pbc(i);
		}
	n = 32 -_ip.size();
	for (i = 0; i <= n; i++)seg += '0';
	if (n != 0) {
		_ip.insert(_ip.find('.'), seg);
		_ip.erase(_ip.find('.'), 1);
	}
	for (i = 4; i < _ip.size(); i += 5)
		_ip.insert(i, ":");
	cout << _ip;
	return 0;
}