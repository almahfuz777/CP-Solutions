#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin >> t;
while(t--){
    int n; cin >> n;
    map<char, int>mp;
    while(n--){
        char c; int x;
        cin >> c >> x;
        mp[c]=x;
    }

    double cost=0;
    int m; cin >> m;
    cin.ignore();
    while(m--){
        string s;
        getline(cin,s);

        for(auto &x:s){
            cost+=mp[x];
        }
    }
    cout << fixed << setprecision(2);
    cout << cost/100.0 << '$' << endl;
}

    return 0;
}