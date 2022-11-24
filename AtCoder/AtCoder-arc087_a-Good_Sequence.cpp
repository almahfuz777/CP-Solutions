#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<int, int> mp;
    vector<int> v;

    int n; cin >> n;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(mp[x]==0) v.push_back(x);
        mp[x]++;
    }
    int cnt=0;
    int size=v.size();
    for(int i=0;i<size;i++){
        if(mp[v[i]]>=v[i]) cnt+=mp[v[i]]-v[i];
		else cnt+=mp[v[i]];
    }
    cout << cnt << endl;
    return 0;
}
