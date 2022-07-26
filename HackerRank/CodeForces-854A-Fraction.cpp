#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(a!=b){
        if(a>b)a-=b;
        else b-=a;
    }
    return a;
}
int main(void)
{
    int n; cin >> n;
    for(int i=n/2;i>=1;i--){
        if(gcd(i,n-i)==1){
            cout << i << " " << n-i << endl;
            break;
        }
    }
    return 0;
}