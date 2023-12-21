#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int s,d; cin >> s >> d;
    int res1 = (s+d)/2;
    int res2 = s-res1;
    if(res1>=0 && res2>=0 && abs(res1-res2)==d){
        cout << res1 << " " << res2 << endl;
    }
    else cout << "impossible" << endl;
}
    return 0;
}