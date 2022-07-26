#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int len=s.length();
        int i, start=0, end=0, cnt=0;
        // checking for first 1
        for(i=0;i<len;i++){
            if(s[i]=='1'){
                start=i;
                break;
            }
        }
        // checking for last 1
        for(i=len;i>start;i--){
            if(s[i]=='1'){
                end=i;
                break;
            }
        }
        // checking for removable 0's
        for(i=start;i<end;i++){
            if(s[i]=='0') cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}