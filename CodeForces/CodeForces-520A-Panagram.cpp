#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    set<char> s;
    for(auto c:str){
        s.insert(tolower(c));
    }
    if(s.size()==26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}