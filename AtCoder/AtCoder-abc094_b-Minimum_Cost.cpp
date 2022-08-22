#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v;
    int n,m,x; cin >> n >> m >> x;
    for(int i=0;i<m;i++) {
        int q; cin >> q;
        v.push_back(q);
    }
    int cnt1=0, cnt2=0;
    for(int i=x+1;i<n;i++){
        if(find(v.begin(),v.end(),i)!=v.end()) cnt1++;
    }
    for(int i=x-1;i>0;i--){
        if(find(v.begin(),v.end(),i)!=v.end()) cnt2++;
    }
    int res=(cnt1<cnt2)? cnt1:cnt2;
    cout << res << endl;
    return 0;
}