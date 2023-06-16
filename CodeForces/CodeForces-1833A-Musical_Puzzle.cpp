#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    testcase{
        set<string> s;

        int n; cin >> n;
        string str; cin >> str;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            string x = str.substr(i,2);
            if(s.find(x)==s.end()){
                cnt++;
                s.insert(x);
            }
        }
        cout << cnt << endl;
    }

    return 0;
}