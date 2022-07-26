#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,given=0,supposed=0,count=0;
    
    while(cin >> n && n!=0)
    {
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0)given++;
            else supposed++;
        }
        int balance=supposed-given;
        printf("Case %d: %d\n",++count,balance);
        supposed=0,given=0;
    }
    return 0;
}



