#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int sum=0; int num=n;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    if(n%sum==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
