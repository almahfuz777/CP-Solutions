#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<string, int> mp;
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(mp.count(s)==0){
            mp[s]=1;
            cout << "OK" << endl;
        }
        else {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}