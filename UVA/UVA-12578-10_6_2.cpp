#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    double length,width,radius,red,green;
    double pi=acos(-1);
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf",&length);
        radius= length/5.0;
        width= length*(6.0/10);
        red=pi*pow(radius,2);
        green=(length*width)-red; 
        
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
