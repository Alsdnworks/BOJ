#include <iostream>
long long int cases[15]={0};
long long int recursive(int n){
    if (cases[n]==0&&n>=3)
        cases[n]=recursive(n-1)+recursive(n-2)+recursive(n-3);
    return cases[n];
}
int main() {
    std::ios::sync_with_stdio(false);
    for (int i= 0;i<15;i++)
        cases[i]=0;
    cases[1]=1;
    cases[2]=2;
    cases[3]=4;
    int n=0,iter;
    std::cin>>iter;
    for(int i=0;i<iter;i++){
        std::cin>>n;
        long long int ans=recursive(n);
        std::cout<<ans<<std::endl;
    }
    return 0;
}
