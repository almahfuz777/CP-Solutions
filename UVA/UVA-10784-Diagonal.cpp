#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n,    // number of diagonals
    res;            // number of sides 
    int count=0;
    while((scanf("%lld",&n))==1 && n!=0){
        res = ceil((3+sqrt(9+(8*n)))/2);
        printf("Case %d: %lld\n", ++count, res);
    }
    return 0;
}