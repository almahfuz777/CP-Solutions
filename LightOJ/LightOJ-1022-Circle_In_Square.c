#include<stdio.h>
#include<math.h>
int main(void)
{
    int t, count=0;
    double r, area, pi=2.0*acos(0.0);
    scanf("%d",&t);

    while(t--){
        scanf("%lf",&r);
        area = (4*r*r)-(pi*r*r);
        printf("Case %d: %.2lf\n",++count,area);
    }
    return 0;
}