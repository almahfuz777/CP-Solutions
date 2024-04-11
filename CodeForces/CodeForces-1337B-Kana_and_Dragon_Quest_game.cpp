#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int x,n,m; cin >> x >> n >> m;

    while(n--){
        if(x>10) x = floor(x/2)+10;
        else break;
    }
    while(m--){
        x-=10;
    }
    
    if(x<=0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

    return 0;
}