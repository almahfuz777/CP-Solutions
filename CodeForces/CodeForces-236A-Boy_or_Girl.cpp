#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main() {
fast;
    set<char> c;
    string s; cin >> s;
    for(int i=0;i<s.size();i++) c.insert(s[i]);
    if(c.size()%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}