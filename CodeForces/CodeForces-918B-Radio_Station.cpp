#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<string,string> mp;
    string name,ip;
    int n, m; cin >> n >> m;
    while(n--){
        cin >> name >> ip;
        ip+=';';
        mp[ip]=name;
    }
    while(m--){
        cin >> name >> ip;
        cout << name << " " << ip << " #" << mp[ip] << endl;
    }
    return 0;
}