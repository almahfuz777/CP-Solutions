#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=(a>b)? a:b;
    int y=(c<d)? c:d;
    printf("%d",x-y);
    return 0;
}
