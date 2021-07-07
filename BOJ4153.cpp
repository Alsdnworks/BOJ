#include <iostream>
#include <cmath>
using namespace std;
int set[3];
int main() {
	int max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> set[i];
		if (set[i] > max)max = set[i];
	}
	if (max == 0)exit(0);
	else {
		if ((pow(max,2) * 2) == pow(set[0],2) + pow(set[1],2) + pow(set[2],2))cout << "right"<<endl;
		else cout << "wrong" << endl;
	}
	main();
}