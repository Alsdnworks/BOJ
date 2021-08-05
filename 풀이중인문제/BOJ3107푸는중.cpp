#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
char ip[50], * loc; int i = 0, n = 0;
vector <char> seg;
string long_ip;
bool flag = false, m_flag = true;
int main() {
	scanf("%s\0", ip);
	while (ip[i] != '\0') {
		seg.push_back(ip[i]);
		if (ip[i + 1] != ':' && ip[i] == ':' && ip[i - 1] != ':') {
			while (seg.size() != 5)
				seg.insert(seg.begin(), '0');
			for (int j = 0; j < 4; j++) {
				long_ip += seg[j];
			}
			seg.clear();
			long_ip += ':';
		}
		if (ip[i] == ':' && ip[i + 1] == ':') {
			for (int j = 0; j < seg.size(); j++) {
				long_ip += seg[j];
			}
			long_ip += ':';
			seg.clear();
			flag = true;
			i += 2;
			continue;
		}
		i++;

	}

	if (ip[i + 1] != ':' && ip[i - 1] != ':') {
		while (seg.size() < 4)
			seg.insert(seg.begin(), '0');
		for (int j = 0; j < 4; j++) {
			long_ip += seg[j];
		}
	}
	if (flag == true) {
		i = 0;
		while (i < long_ip.size()) {
			if (long_ip[i] == ':' && long_ip[i + 1] == ':')break;
			i++;
		}
		while (long_ip.size() <= 39) {
			long_ip.insert(i + 1, "0000:");
			i += 5;
		}
		if (long_ip[0] = ':')
			long_ip.erase(0, 1);
		while (m_flag == true) {//시작부터 탐색하는 형식으로
			m_flag = false;
			for (int i = 0; i < long_ip.size() - 1; i++) {
				if (long_ip[i] == ':' && long_ip[i + 1] == ':') {
					long_ip.erase(i, 1);
					m_flag = true;
				}
			}
		}
	}
	cout << long_ip;
	return 0;
}