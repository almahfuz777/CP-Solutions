#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t; cin >> t;
    long long n,res;

    while(t--)
    {
        cin >> n;
        if(n>2){
            if(n%2==0) res=n/2-1;
            else if(n%2!=0) res=n/2;
        }
        else res=0;
        cout << res << endl;
    }
    return 0;
}