#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int n,m; cin >> n >> m;
    vector<pair<int,int>>v;

    while(m--){
        int a,b;
        cin >> a >> b;
        v.push_back({b,a});
    }

    sort(all(v));
    reverse(all(v));

    int cnt=0; ll res=0;
    for(auto x:v){
        if(x.second<=n){
            res+=(x.second*x.first);
            n-=x.second;
        }
        else{
            res+=(n*x.first);
            break;
        }
    }
    cout << res << endl;

    return 0;
}