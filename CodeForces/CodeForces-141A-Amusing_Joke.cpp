#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    
    string s = guest + host;
    
    sort(s.begin(),s.end());
    sort(pile.begin(),pile.end());
    
    if(s==pile) cout << "YES" << endl;
    else cout << "NO" << endl; 
    
    return 0;
}