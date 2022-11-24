#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--){
        map<int, char>mp;
        int n; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        string s; cin >> s; string temp=s;
        for(int i=0;i<n;i++){
            mp[arr[i]]=s[i];
        }
        s="";
        for(int i=0;i<n;i++){
            s+=mp[arr[i]];
        }
        if(s==temp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}