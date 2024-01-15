#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int s,n; cin >> s >> n;
    string res = "YES";
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y; cin >> x >> y;
        v.push_back({x,y});
    }
    sort(all(v));
    for(auto x:v){
        if(x.first>=s){
            res="NO";
            break;
        }
        else s+=x.second;
    }
    cout << res << endl;
    return 0;
}