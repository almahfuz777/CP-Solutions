#include<stdio.h>
int main(void)
{
    int t,q,p;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&q,&p);
        if(q>1000)printf("%lf\n",q*p-q*p*.10);
        else printf("%lf\n",(double)q*p);
    }

    return 0;
}