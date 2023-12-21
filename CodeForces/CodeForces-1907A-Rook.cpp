#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    string s; cin >> s;
    for(int i=1;i<=8;i++){
        if(int(s[1])-'0' != i) cout << s[0] << i << endl;
    }
    for(char i='a';i<='h';i++){
        if(s[0]!=i) cout << i << s[1] << endl;
    }
}

    return 0;
}