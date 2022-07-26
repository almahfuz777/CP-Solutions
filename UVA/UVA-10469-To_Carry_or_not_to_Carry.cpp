#include<stdio.h>
int main(void)
{
    int unsigned long  a,b,result;

    while(scanf("%lu %lu",&a,&b)==2){
        result = (a^b);
        printf("%lu\n",result);
    }
    return 0;
}