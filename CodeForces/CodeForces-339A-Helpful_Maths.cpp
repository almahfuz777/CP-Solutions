#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    vector<int> v;
    string s; cin >> s;
    for(int i=0;i<s.size();i+=2){
        v.push_back(s[i]-'0');
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i];
        if(i!=v.size()-1) cout << "+";
    }

    return 0;
}