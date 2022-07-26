#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n], cnt=0;
    //for(int i=0;i<n;i++) 
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]!=i+1) cnt++;   
    }
    if(cnt>2) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}