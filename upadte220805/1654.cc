#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<long long int> lenV;
long long int K, N,temp1,temp2=0;
long long int sumBuffer=0;

void BS(long long int start,long long int end,long long int limit,long long int N){
    int K_buffer=0;
    for(int i=0;i<K;i++){
        K_buffer+=lenV[i]/end;
    }
    if(start==end){
        printf("%lld",end);
        return;
    }
    else if(K_buffer<N){
        BS(start,(start+end)/2,limit,N);
    }
    else{
        BS(end,(limit+end)/2,limit,N);
    }
}

int main(){
    scanf("%lld %lld",&K,&N);
    for(int i=0;i<K;i++){
        scanf("%lld",&temp1);
        sumBuffer+=temp1;
        lenV.push_back(temp1);
    }
    temp1=sumBuffer/N;
    BS(0,temp1,temp1,N);
    return 0;
}


