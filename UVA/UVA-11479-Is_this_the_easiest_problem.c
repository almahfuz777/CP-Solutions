#include <stdio.h>

int main(void)
{
    int t;
    long long int a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c&&b+c>a&&c+a>b){
            if(a==b&&b==c)printf("Case %d: Equilateral\n",i);
            else if(a==b||b==c||a==c)printf("Case %d: Isosceles\n",i);
            else if(a!=b&&b!=c&&a!=c)printf("Case %d: Scalene\n",i);
        }
        else printf("Case %d: Invalid\n",i); 
    }
    return 0;
}
