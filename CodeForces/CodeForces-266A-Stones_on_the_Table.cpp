#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    int n; cin >> n;
    string s; cin >> s;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}