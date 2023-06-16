#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    ll n,m,a; cin >> n >> m >> a;
    ll x,y;
    (n%a==0)? x = n/a : x = n/a+1;
    (m%a==0)? y = m/a : y = m/a+1;
    cout << x*y << endl;
    return 0;
}