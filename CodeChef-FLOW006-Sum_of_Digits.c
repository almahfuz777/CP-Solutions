#include <stdio.h>

int main(void)
{
    int T,n,sum=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
