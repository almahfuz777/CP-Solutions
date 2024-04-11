#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int odd=0;
    for(auto x:mp){
        if(x.second%2!=0) odd++;
    }
    if(odd-k<=1) cout << "YES" << endl;
    else cout << "NO" << endl; 

}
    return 0;
}