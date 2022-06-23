#include <stdio.h>

int main(void)
{
    int T,N1,N2,i,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&N1,&N2);
        sum= N1+N2;
        printf("%d\n",sum);
    }
    return 0;
}