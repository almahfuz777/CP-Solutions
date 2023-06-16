#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long
 
int main() {
fast;
    testcase{
        int n; cin >> n;
        string s; cin >> s;
        string a="";
        char check = s[0];
        for(int i=1;i<n;i++){
            if(s[i]==check){
                a+=s[i];
                check=s[i+1];
                i++;
            }
        }
        cout << a << endl;
    }
 
    return 0;
}