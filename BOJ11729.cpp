#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

vector <int>buffer;
void hanoiTest(int number, int from, int by, int to) {
	if (number == 1) {
		buffer.push_back(from);
		buffer.push_back(to);
		return;
	}
	else {
		hanoiTest(number - 1, from, to, by);
		buffer.push_back(from);
		buffer.push_back(to);
		hanoiTest(number - 1, by, from, to);
	}
}

int main() {
	int i = 0;
	int pan;
	//buffer.capacity
	scanf("%d", &pan);
	hanoiTest(pan, 1, 2, 3);

	cout << (buffer.size() / 2) << endl;
	for (int i = 0; i < buffer.size(); i += 2) {
		printf("%d %d \n", buffer[i], buffer[i + 1]);
	}
	return 0;
}