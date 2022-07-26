#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s; cin >> s;
    int cnt=0;
    int len= s.size();
    int n= len/2;
    for(int i=0;i<n;i++){
        --len;
        if(s[i]!=s[len])cnt++;
    }
    cout << cnt << endl;
    return 0;
}