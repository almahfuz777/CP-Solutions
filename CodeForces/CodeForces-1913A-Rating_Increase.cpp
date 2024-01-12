#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    string s; cin >> s;
    int flag=0;
    for(int i=1;i<s.size();i++){
        if(s[i]!='0'){
            string s1=s.substr(0,i);
            string s2=s.substr(i,s.size());

            if(stoi(s2)<=stoi(s1)) cout << -1 << endl;
            else cout << s1 << " " << s2 << endl;
            flag=1;
            break;
        }
    }
    if(!flag)cout << -1 << endl;
    
} 

    return 0;
}