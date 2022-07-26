#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s,t;
    cin >> s >> t;
    int sl = s.length();
    int tl = t.length();
    int n = min(sl,tl);
    int cnt=0;
    while(s[sl-1]==t[tl-1]){    // matching the last char
        cnt++; sl--;tl--;   // reducing by one char from the end
        if(sl==0||tl==0) break; // if a string finishes
    }
    cout << s.length()+t.length()-2*cnt;
    return 0;
}