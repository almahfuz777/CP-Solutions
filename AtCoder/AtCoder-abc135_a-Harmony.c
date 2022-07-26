#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,k,flag=0;
    scanf("%d%d",&a,&b);
    int max=(a>b)?a:b;
    for(k=0;k<max;k++){
        if(abs(a-k)==abs(b-k)){
            flag=1;       
            break;
        }
    }
    if (flag==1)printf("%d",k);
    else printf("IMPOSSIBLE");

    return 0;
}