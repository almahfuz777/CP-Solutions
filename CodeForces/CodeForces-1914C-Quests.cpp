#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long
 
int main() {
fast;
testcase{
    int n,k; cin >> n >> k;
    int a[n], b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
 
    int sum=0;
    int mx =0;
    int res=0;
 
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        mx = max(mx,b[i]);
        int curr = sum+(k-i-1)*mx;
        res = max(res,curr);
    }
    cout << res << endl;
 
}
 
    return 0;
}