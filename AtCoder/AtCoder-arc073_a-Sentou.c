#include <stdio.h>
int main(void)
{
    long long n,t,i,time=0;
    scanf("%lld%lld",&n,&t);
    long long arr[n];
    for(i=0;i<n;i++) scanf("%lld",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]<=t)time+=arr[i+1]-arr[i];
        else time+=t;
    }
    printf("%lld",time);
    return 0;
}