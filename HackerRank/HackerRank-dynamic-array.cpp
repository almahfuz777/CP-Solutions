#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    int n,q; cin >> n >> q;
    vector<int> arr[n];
    int lastAns = 0;
    while(q--){
        int s,x,y; cin >> s >> x >> y;
        int idx = (x^lastAns)%n;
        if(s==1){
            arr[idx].push_back(y);
        }
        else if(s==2){
            lastAns = arr[idx][y%(arr[idx].size())];
            cout << lastAns << endl;
        }
    }

    return 0;
}