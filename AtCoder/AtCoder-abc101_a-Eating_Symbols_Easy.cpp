#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res=0;
    string s; cin >> s;
    for(int i=0;i<4;i++){
        if(s[i]=='+') res++;
        else if(s[i]='-') res--;
    }
    cout << res << endl;
    return 0;
}
