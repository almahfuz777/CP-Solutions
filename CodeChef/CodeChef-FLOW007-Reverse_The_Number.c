#include <stdio.h>
#include <math.h>

int main(void)
{
    int t,n,reverse=0;
    
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        while(n!=0){
            int remainder=n%10;
            reverse=reverse*10+remainder;
            n/=10;
        }
        printf("%d\n",reverse);
        reverse=0;
    }
    return 0;
}
