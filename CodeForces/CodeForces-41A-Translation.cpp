#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    string s, t; cin >> s >> t;
    reverse(s.begin(),s.end());
    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}