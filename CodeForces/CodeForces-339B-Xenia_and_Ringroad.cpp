#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int n,m; cin >> n >> m;
    ll arr[m];
    for(int i=0;i<m;i++) cin >> arr[i];
    ll res=arr[0];
    for(int i=1;i<m;i++){
        if(arr[i]<arr[i-1]){
            res+=(n-arr[i-1]);
            res+=(arr[i]);
        }   
        else{
            res+=(arr[i]-arr[i-1]);
        }
    }
    cout << res-1 << endl;

    return 0;
}