#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n,m,k; cin >> n >> m >> k;
    set<int> s1,s2,res;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x>=1 && x<=k){
            s1.insert(x);
            res.insert(x);
        }
    }
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        if(x>=1 && x<=k){
            s2.insert(x);
            res.insert(x);
        }
    }
    if(res.size()==k){
        if(s1.size()>=(k/2) && s2.size()>=(k/2)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else cout << "NO" << endl;

}

    return 0;
}