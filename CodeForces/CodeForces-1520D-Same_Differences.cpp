#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        x-=i;
        mp[x]++;
    }
    ll res=0;
    for(auto x:mp){
        res += (x.second*(x.second-1))/2;
    }
    cout << res << endl;
}
    return 0;
}