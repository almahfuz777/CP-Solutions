#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    string a,b,c; cin >> a >> b >> c;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==c[i]||b[i]==c[i])cnt++;        
    }
    cout << ((cnt!=n)? "YES":"NO") << endl;
}

    return 0;
}