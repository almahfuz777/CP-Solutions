#include<stdio.h>
int main(void)
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        int count=0;
        if(a==0)count=1;
        for(int i=a;i<=b;i++){
            int temp=i;
            while(temp>0){
                int rem=temp%10;
                if(rem==0){
                    count++;break;
                }
                temp/=10;
            }
        }   
        printf("%d/%d\n",count,b-a+1);
    }
    return 0;
}