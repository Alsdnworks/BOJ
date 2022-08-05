#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool s[21]={0};
void e(){memset(s,false,21);}
int main(){
    int r,a;scanf("%d",&r);
    for (int i = 0; i < r; i++) {
        char in[10];
        scanf("%s %d",in,&a);
        if (in[1] == 'l')memset(s,true,21);
        if(in[0] == 'e')e();
        if (in[0] == 'r') s[a]=0;
        if (in[0] == 'c') printf("%d\n",s[a]);
        if (in[0] == 't') s[a]=!s[a];
        if (in[1] == 'd') s[a]=1;
    }
    return 0;
}