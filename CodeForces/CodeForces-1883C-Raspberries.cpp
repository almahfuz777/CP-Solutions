#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n,k; cin >> n >> k;

    int even=0, ans=k;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x%2==0) even++;

        if(x%k==0) ans = 0;
        else ans = min(ans, k-(x%k));
    }

    if(k==4){
        if(even>=2) ans = 0;    // (even*even)%4=0
        else if(even==1) ans = min(ans,1);
        else ans = min(ans, 2); // no even
    }

    cout << ans << endl;
}

    return 0;
}