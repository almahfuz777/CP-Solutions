
// milenai
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
fast;
    testcase{
        string s; cin >> s;
        map<char,int> m;
        for(char c : s){
            m[c]++;
        }
        int even = 0;
        for(auto &i : m){
            if(i.second%2==0) even++;
        }
        
        if(s.size()<4) no;
        else{
            if(m.size()>1) yes;
            else no;
        }
        cout << m.size() << endl;
    }

    return 0;
}
