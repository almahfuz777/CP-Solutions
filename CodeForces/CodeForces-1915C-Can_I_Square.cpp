#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    ll n; cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin >> arr[i];
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    ll root = sqrt(sum);
    if(sum==root*root) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

    return 0;
}