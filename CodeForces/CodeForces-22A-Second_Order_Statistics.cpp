#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, flag=0; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        if(arr[i]>arr[0]){
            cout << arr[i] << endl;
            flag=1; break;
        }
    if(flag==0) cout << "NO" << endl;
    return 0;
}