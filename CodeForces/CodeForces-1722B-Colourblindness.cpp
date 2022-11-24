#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        int n,cnt=0; cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]) cnt++;
            else if(s1[i]=='G'&&s2[i]=='B' || s1[i]=='B'&&s2[i]=='G') cnt++;
            else break;
        }
        if(cnt==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}