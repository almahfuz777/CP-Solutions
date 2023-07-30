#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n; cin >> n;
    string str; cin >> str;

    stack<char> s;
    
    int cnt = 0;
    for (int i=0;i<n;i++){
        char c = str[i];
        if(c=='(') s.push(c);
        else if(!s.empty()){
            if(c==')' && s.top()=='(') s.pop();
        }
        else cnt++;
    }
    cout << cnt << endl;
}
    return 0;
}