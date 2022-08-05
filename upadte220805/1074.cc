#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
long long int n,r,c=0;
long long int rcs(long long int qn, long long int init){
    long long int pqn=pow(2,qn);
    long long int ppqn=pow(pqn,2);
    if (qn==-1) return init;
    if(r<pqn&&c<pqn) return rcs(qn-1,init);
    else if((r<pqn)&&(c>=pqn)){
        c=c-(pqn);
        return rcs(qn-1,init+ppqn);
    }
    else if(r>=pqn&&(c<pqn)){
        r=r-(pqn);
        return rcs(qn-1,init+ppqn*2);
    }
    else{
        r=r-(pqn);
        c=c-(pqn);
        return rcs(qn-1,init+ppqn*3);
    }
}
int main(){
    scanf("%lld %lld %lld",&n, &r,&c);
    printf("%lld",rcs(n,0));
    return 0;
}