#include <iostream>
#include <vector>
#include<algorithm>
#include<functional>
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