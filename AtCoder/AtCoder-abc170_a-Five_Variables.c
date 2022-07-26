#include <stdio.h>
int main(void)
{
    int i,arr[5];
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0)break;
    }
    printf("%d",i+1);
    return 0;
}
