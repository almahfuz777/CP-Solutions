#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    vector<int> v;
    set<int> s;
    int n,m,k, h; cin >> n >> m >> k >> h;
    int height[n];
    for(int i=0;i<n;i++){
        cin >> height[i];
        v.push_back(abs(h-height[i]));
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(i==j) continue;
            int diff = abs(i-j)*k;
            if(find(v.begin(),v.end(),diff)!=v.end()) s.insert(diff);
        } 
    }
    int cnt = 0;
    for(auto x:v){
        if(find(s.begin(),s.end(),x)!=s.end()){
            cnt++;
        }
    }
    cout << cnt << endl;
}
    return 0;
}