#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n; cin >> n;
    string s; cin >> s;
    map<char, int>mp;
    for(auto x:s){
        mp[x]++;
    }
    int cnt=0;
    for(auto x:mp){
        if(x.first-64<=x.second){
            cnt++;
        }
    }
    cout << cnt << endl;
}

    return 0;
}