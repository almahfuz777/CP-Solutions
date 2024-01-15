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
    int xp=0,xn=0,yp=0,yn=0;
    for(int i=0;i<n;i++){
        int x,y; cin >> x >> y;
        if(x>0)xp=1;
        if(x<0)xn=1;
        if(y>0)yp=1;
        if(y<0)yn=1;    
    }
    if(xp&&xn&&yp&&yn) cout << "NO" << endl;
    else cout << "YES" << endl;
}

    return 0;
}