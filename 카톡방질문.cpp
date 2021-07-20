#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cctype>
#include<algorithm>
#include <string>
#include <vector>
using namespace std;
//숫자를 입력하면 반점을 제외하고 숫자를 출력하는 프로그램
//1.숫자가아니면 엔터로처리, 2.숫자활용을위한int변환후 출력
int main() {
	int buffer = 0; int j = 0;
	vector<int>v;
	string input;
	cin >> input;
	reverse(input.begin(),input.end());//pow를위해 한번 뒤집어줍니다.
	for (int i = 0; i < (input.length()+1);i++) {
		if (isdigit(input[i]) == 0) {//숫자가아니면 0을 출력하는 cctype의 isdigit
			v.push_back(buffer);//숫자가아니면 버퍼의 수를 푸시백하고 버퍼와 자리수초기화
			j = 0; buffer = 0;
		}
		else {
			buffer += (((int)input[i] - 48) * pow(10, j)); //아스키코드를 int화시키고 자릿수를 곱해줍니다.
			j++;
		}
	}
	reverse(v.begin(), v.end());//위에서 리버스했으므로 원래 순으로 다시 뒤집어줍니다.
	cout << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout <<v[i] << endl;
	}
		return 0;
}