#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int x,n; cin >> x >> n;
    int ans = 1;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(x/i>=n) ans = max(ans,i);
            if(i>=n) ans = max(ans,x/i);
        }
    }
    cout << ans << endl;
}

    return 0;
}