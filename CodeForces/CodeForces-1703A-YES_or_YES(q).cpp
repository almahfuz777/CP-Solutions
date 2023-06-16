#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    testcase{
        string s; cin >> s;
        string x="";
        for(int i=0;i<3;i++){
            x+= tolower(s[i]);
        }
        if(x=="yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}