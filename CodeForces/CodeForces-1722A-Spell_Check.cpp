#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    string s; cin >> s;
    sort(all(s));
    if(s=="Timru") cout << "YES" << endl;
    else cout << "NO" << endl;
}

    return 0;
} 