#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<int, int> mp;
    int n; cin >> n; int res=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
        res=max(res,mp[x]);
    }
    cout << res << endl;
    return 0;
}