#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    ll n; cin >> n;
    if(n&(n-1)) cout << "YES" << endl; // n is not a power of 2
    else cout << "NO" << endl;
}

    return 0;
}