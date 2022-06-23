#include <stdio.h>

int main(void)
{
    int t,n,first,last;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        last= n%10;
        while(n>0){
            first=n%10;
            n/=10;
        }
        printf("%d\n",first+last);
    }
    return 0;
}