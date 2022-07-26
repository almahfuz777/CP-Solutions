#include <stdio.h>

int main(void)
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
