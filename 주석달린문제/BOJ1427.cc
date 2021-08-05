#include <iostream>
#include <vector>
#include<algorithm>
#include<functional>
//1427번: 소트인사이드
//입력되는 set을 자리수별로 pushback하고 sort하는 문제이다.
//sort에서 사용하는 인수는 3종류가 있다. 사용자함수 func_name(), 
//내림차순 greater<type>(), 오름차순less<type>()
using namespace std;
int main() {
	vector <int> buffer; buffer.reserve(100); int set; int i = 0;
	cin >> set;
	while (set >= 1) {
		buffer.push_back(set % 10);
		set /= 10;
	}
	sort(buffer.begin(), buffer.end(), greater<int>());
	for (i = 0; i < buffer.size(); i++)
		cout << buffer[i];
	return 0;
}