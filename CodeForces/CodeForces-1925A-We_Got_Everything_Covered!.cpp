#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n,k; cin >> n >> k;
    string s="";
    for (char c = 'a'; c < ('a' + k); c++) {
        s += c;
    }
    while(n--)
        cout << s;
    cout << endl;
}    

    return 0;
}