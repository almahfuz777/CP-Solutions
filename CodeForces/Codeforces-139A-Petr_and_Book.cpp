#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i, n, sum=0, flag;
    int arr[7];
    cin >> n;
    for(i=0;i<7;i++) cin >> arr[i];

    while(!(sum>=n))
    {
        for(i=0;i<7;i++){
            sum+=arr[i];
            if(sum>=n) break;
        }
    }
    cout << i+1 << endl;

    return 0;
}
/*
Optimized way:
    
    int t = a[0];
    int i=0;
    while (sum < n)
    {
        i++;
        i %= 7;
        t += a[i];
    }
*/