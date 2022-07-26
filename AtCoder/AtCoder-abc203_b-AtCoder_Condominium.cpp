#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,n,k,sum=0;
    cin >> n >> k;
    for(int j=1;j<=n;j++){
        for(i=100*j+1;i<=j*100+k;i++){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}