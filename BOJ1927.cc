#include<iostream>
#include<queue>
#include <functional>
#include <vector>
using namespace std;
int in=0,ret;
priority_queue<int,vector<int>,greater<int>> q;
int main(){
    scanf("%d",&ret);
	for (int i=0;i<ret;i++){
        scanf("%d",&in);
		if (in==0){
			if(!q.empty()){
				printf("%d\n",q.top());
				q.pop();	
			}
			else printf("0\n");
		}
		else q.push(in);
	}
	return 0;
}