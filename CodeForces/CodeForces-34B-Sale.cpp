#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int n,m; cin >> n >> m;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(all(v));
    int sum=0;
    for(int i=0;i<m;i++){
        if(v[i]<0) sum+=v[i];
        else break;
    }
    cout << -sum << endl;
    return 0;
}