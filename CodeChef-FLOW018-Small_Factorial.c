#include <stdio.h>

int main(void)
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        int fact=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++) fact*=i;
        printf("%d\n",fact);
    }
    return 0;
}
