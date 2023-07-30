#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    char c; cin >> c;
    string s = "codeforces";
    if(find(s.begin(),s.end(),c)!=s.end())
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}