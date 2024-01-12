#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    string s; cin >> s;
    s = s.substr(0,s.size()/2);
    int k = unique(all(s)) - s.begin();
    cout << (k==1? "NO":"YES") << endl;
}    

    return 0;
}