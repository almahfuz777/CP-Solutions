#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int a,b,c;
    cin >> a >> b >> c;
    if(a<b && b<c) cout << "STAIR" << endl;
    else if(a<b && b>c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}

    return 0;
}