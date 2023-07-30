#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    string s; cin >> s;
    for(int i=0;i<s.size()-1;i+=2){
        cout << s[i];
    }cout << s[s.size()-1] << endl;
} 
    return 0;
}