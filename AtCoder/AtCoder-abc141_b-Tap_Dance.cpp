#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s; cin >> s;
    int len= s.size(); int flag=0;
    for(int i=0;i<len;i++){
        if((i+1)%2 == 0 && s[i]=='R') flag=1; 
        if((i+1)%2 != 0 && s[i]=='L') flag=1; 
    }
    if(flag==1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}