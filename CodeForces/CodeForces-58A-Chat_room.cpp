#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string find = "hello";
    int x = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==find[x]){
            x++;
        }
        if(x==find.size()) break;
    }
    if(x==find.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}