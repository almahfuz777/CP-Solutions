#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    int n; cin >> n;
    string s; cin >> s;

    int flag=0;
    for(int i=1;i<n;i++){
        int xL=0, xO=0;
        int yL=0, yO=0;
        string s1 = s.substr(0,i);
        string s2 = s.substr(i,n);
        for(char ch:s1){
            if(ch=='L')xL++;
            else xO++;
        }
        for(char ch:s2){
            if(ch=='L')yL++;
            else yO++;
        }

        if(xL!=yL && xO!=yO){ 
            cout << i << endl;
            flag=1;   
            break;
        }
    }
    if(flag==0)
        cout << -1 << endl;

    return 0;
}