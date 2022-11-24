#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        char max = s[0];
        for(int i=0;i<n;i++){
            if(s[i]>max) max = s[i];
        }
        cout << int(max)-'a'+1 << endl;
    }
    return 0;
}