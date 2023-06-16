#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    ll n,k; cin >> n >> k;
    if(k <= (n+1) / 2){
        cout << 2*k-1 << endl;
    }
    else{
        k -= ((n+1)/2);
        cout << 2*k << endl;
    }
    return 0;
}