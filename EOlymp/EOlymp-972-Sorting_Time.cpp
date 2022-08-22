#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    multimap<int, string> mp;
    int n; cin >> n;
    while(n--)
    {
        int hr,min,sec;
        cin >> hr >> min >> sec;
        string s= to_string(hr)+" "+ to_string(min)+ " " + to_string(sec);
        int total=hr*3600+min*60+sec;
        mp.insert({total,s});
    }
    for(auto it : mp) cout << it.second << endl;
    return 0;
}