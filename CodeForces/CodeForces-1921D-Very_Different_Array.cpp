#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main() {
fast;
testcase{
    int n, m; cin >> n >> m;
    vector<ll> a,b,c;
    for(int i=0;i<n;i++){ll x; cin >> x; a.push_back(x);}
    for(int i=0;i<m;i++){ll x; cin >> x; b.push_back(x);}

    sort(all(a));
    sort(rall(b));

    for(int i=0;i<n;i++){
        c.push_back(abs(a[i]-b[i]));
    }

    ll sum=0;
    for(int i=n-1,j=m-1;i>=0;i--,j--){
        ll x = abs(a[i]-b[j]);
        if(x>c[i])c[i]=x;
        sum+=c[i];
    }
    cout << sum << endl;
}

    return 0;
}