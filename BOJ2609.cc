#include<bits/stdc++.h>
using namespace std;
int a, b, t,r=1;
int main(){
	cin >> a >> b;
	t = a * b;
	while (r != 0) 
	{r =a%b;a = b;b = r;}
	printf("%d\n%d",a,t/a);
	return 0;
}