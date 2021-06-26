#include <iostream>
#include <string>

using namespace std;

int main() {
	int value = 666;
	string movie;
	int num;
	int cnt = 0;
	cin >> num;
	for (;;) {
		movie = to_string(value);
		if (movie.find("666") != string::npos) cnt++;
		if (cnt == num) break;
		value++;
	}
	cout << movie;
}