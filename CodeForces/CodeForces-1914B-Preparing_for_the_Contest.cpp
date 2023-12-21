#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    vector<int>v;
    int n,k; cin >> n >> k;
    int i,j;
    for(i=1;i<=k;i++) v.push_back(i);
    for(j=n;j>=i;j--) v.push_back(j);
    for(auto x:v){
        cout << x;
        if(!v.empty()) cout <<" ";
    }
    cout << endl;
    
}

    return 0;
}