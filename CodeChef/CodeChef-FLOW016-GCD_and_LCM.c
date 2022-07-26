#include <stdio.h>

int main(void)
{
    long int t,a,b,x,y,gcd,lcm,rem;
    scanf("%ld",&t);
    for(int i=1;i<=t;i++){
        scanf("%ld%ld",&a,&b);
        x=a;y=b;
        while(y!=0){
            rem=x%y;
            x=y;
            y=rem;
        }
        gcd=x;
        lcm=(a*b)/gcd;
        printf("%ld %ld\n",gcd,lcm);
    }
    return 0;
}
