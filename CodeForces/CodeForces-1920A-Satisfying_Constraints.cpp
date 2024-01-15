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
    ll max=LLONG_MAX, min=0, invalid=0; 
    vector<int>v;
    for(int i=0;i<n;i++){
        int a; ll x;
        cin >> a >> x;
        if(a==1){
            if(x>min) min = x;
        }
        else if(a==2){
            if(x<max) max = x;
        }
        else{
            v.push_back(x); 
        }
    }
    for(auto x:v){
        if(x>=min&&x<=max) invalid++;
    }
    ll res = max-min+1-invalid;
    cout << ((res>=0)? res:0) << endl;
}

    return 0;
}