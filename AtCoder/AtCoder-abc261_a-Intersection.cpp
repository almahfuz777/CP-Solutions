#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map <string,int> mp;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        if(mp.count(s)==0) {
            cout << s << endl;      
        }
        else{
        cout << s << "(" << mp[s] << ")" << endl;
        }
        mp[s]++;
    }
    return 0;
}