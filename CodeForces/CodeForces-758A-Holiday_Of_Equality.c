#include <stdio.h>

int main(void)
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max)s+=max-arr[i];
    }
    printf("%d",s);
    return 0;
}
