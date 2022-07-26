#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        int n, cnt=0; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];

        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=1) cnt++;
        }
        if((n-cnt)==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
