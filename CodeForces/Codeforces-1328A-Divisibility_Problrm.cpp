#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    ll a,b; cin >> a >> b;
    if(a%b==0)cout << 0 << endl;
    else{
        ll cur=a/b;
        cout << b*(cur+1) - a<<endl;
    }
}

    return 0;
}