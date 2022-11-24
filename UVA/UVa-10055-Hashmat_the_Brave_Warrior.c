#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    long long int a,b;
    while((scanf("%ld %ld",&a,&b))==2)
    printf("%ld\n",abs(a-b));
    return 0;
}