#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    ll a,b; cin >> a >> b;
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    set<pair<ll,ll>>s1,s2;

    s1.insert({x1 + a, y1 + b});
    s1.insert({x1 + a, y1 - b});
    s1.insert({x1 - a, y1 + b});
    s1.insert({x1 - a, y1 - b});
    s1.insert({x1 + b, y1 + a});
    s1.insert({x1 + b, y1 - a});
    s1.insert({x1 - b, y1 + a});
    s1.insert({x1 - b, y1 - a});

    s2.insert({x2 + a, y2 + b});
    s2.insert({x2 + a, y2 - b});
    s2.insert({x2 - a, y2 + b});
    s2.insert({x2 - a, y2 - b});
    s2.insert({x2 + b, y2 + a});
    s2.insert({x2 + b, y2 - a});
    s2.insert({x2 - b, y2 + a});
    s2.insert({x2 - b, y2 - a});

    ll cnt=0;
    for(auto x:s1){
        if(s2.find(x)!=s2.end())
            // if(x.first>=0 && x.second>=0) 
            cnt++;
    }
    cout << cnt << endl;
}

    return 0;
}