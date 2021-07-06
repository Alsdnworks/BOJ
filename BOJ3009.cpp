#include <iostream>
using namespace std;
int a[3], b[3];int main() 
{for (int i = 0; i < 3; i++)
cin >> a[i] >> b[i]; 
	
if (a[0] == a[1])
	cout << a[2];
else if (a[1] == a[2])
	cout << a[0];
else
	cout << a[1];
cout << " ";
if (b[0] == b[1])
	cout << b[2];
else if (b[1] == b[2])
	cout << b[0];
else
	cout << b[1];

	return 0;
}