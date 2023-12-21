#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int res = n;
    for(int i=1;i<=n/2;i++){
        if(s.substr(0,i)==s.substr(i,i)){
            res = n-i+1;
        }
    }

    cout << res << endl;
    
    return 0;
}