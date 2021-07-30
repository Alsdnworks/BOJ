#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
char ip[50]; int i=0,n=0;
vector <char> seg;
string long_ip;
int main(){
	scanf("%s\0",ip);
	while (ip[i]!= '\0') {
		seg.push_back(ip[i]);
		if (ip[i+1]!=':'&&ip[i]==':'&&ip[i-1]!=':') {
			while (seg.size() != 5)
				seg.insert(seg.begin(), '0');
			for (int j = 0; j < 4; j++) {
				long_ip += seg[j];
			}
			seg.clear();
			long_ip += ':';
		}
		i++;
	}
	if (ip[i + 1] != ':' && ip[i - 1] != ':') {
		while (seg.size() != 4)
			seg.insert(seg.begin(), '0');
		for (int j = 0; j < 4; j++) {
			long_ip += seg[j];
		}
	}
	for (int i = 0; long_ip[i] ==':' && long_ip[i+1]==':';i++)
		while (long_ip.size()<=39){
			long_ip.insert(i, "0000:");
			i+=5;
		}
	//long_ip에서 ::를 찾아서 39가될때까지 :0000을 추가
	cout << long_ip;
	return 0;
}