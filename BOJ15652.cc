#include <iostream>
using namespace std;
int m; int n;int arg[10];
void func(int lvl, int key,int res){
	if (lvl > m) {
		for (int i = 1; i <= m; i++)
			cout<<arg[i]<<" ";
		cout<<endl;
		return;
	}
	for (int i=res; i <= n; i++) {
		arg[lvl] = i;
		func(key+1, lvl+1,i);
	}
}
int main() {
	cin>>n>>m;
	func(1,1,1);
	return 0;
}