#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int i=0, a,b; cin >> a >> b;
    string x,s; cin >> x >> s;

    for(i=0;i<6;i++){
        if(x.find(s)!=string::npos) break;
        else x+=x;
    }

    if(i==6) cout << -1 << endl;
    else cout << i << endl;
}

    return 0;
}