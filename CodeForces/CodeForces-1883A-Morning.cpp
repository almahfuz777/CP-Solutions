#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    string s; cin >> s;

    vector<int>v;
    for(int i=0;i<4;i++){
        if(s[i]=='0') v.push_back(10);
        else v.push_back(s[i]-'0');
    }

    int cnt=0;
    cnt+=v[0];
    for(int i=0;i<3;i++){
        cnt+=abs(v[i+1]-v[i]); 
        cnt++; 
    }
    cout << cnt << endl;
}

    return 0;
}
