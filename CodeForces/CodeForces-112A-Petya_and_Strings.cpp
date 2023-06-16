#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    string s1,s2; cin >> s1 >> s2;
    string x="",y="";
    for(int i=0;i<s1.length();i++){
        x+=tolower(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        y+=tolower(s2[i]);
    }
    if(x==y) cout << '0' << endl;
    else if(x>y) cout << '1' << endl;
    else cout << "-1" << endl;

    return 0;
}