#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s="heidi", str;
    cin >> str;
    int c=0;
    
    for(int i=0;i<str.size();i++){
        if(str[i]==s[c]) c++;
    }
    if(c==5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}