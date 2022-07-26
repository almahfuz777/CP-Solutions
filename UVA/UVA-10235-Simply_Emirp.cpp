#include<stdio.h>
int isprime(long long int n){
    if(n%2==0 && n!=2)return 1;
    else{
        for(int i=3;i<=n/2;i++){
            if(n%i==0) return 1;
        }   
    }
    return 0;
}
int isemirp(long long int n){
    long long int num=n;
    long long int rev=0;
    while(n!=0){
        rev=rev*10 + n%10;
        n/=10;
    }
    if(rev==num)return 1;
    else{
        if(isprime(rev)==0)return 0;
        else return 1;
    }
}
int main(void)
{
    long long int n;
    while((scanf("%lld",&n))==1)
    {
        if(isprime(n)==1 || n==1)printf("%lld is not prime.\n",n);
        else if(isprime(n)==0){
            if(isemirp(n)==0)printf("%lld is emirp.\n",n);
            else if(isemirp(n)==1)printf("%lld is prime.\n",n);
        }
    }

    return 0;
}