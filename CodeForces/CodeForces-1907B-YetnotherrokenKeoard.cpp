#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long
#define all(v) v.begin(),v.end()

int main() {
fast;
testcase{
    string s; cin >> s;
    vector<pair<int,char>> upper,lower,v;
    int rmvcnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            if(!upper.empty()) upper.pop_back();
        } 
        else if(s[i]=='b'){
            if(!lower.empty()) lower.pop_back();
        }
        else{
            if(islower(s[i])) lower.push_back({i,s[i]});
            if(isupper(s[i])) upper.push_back({i,s[i]});
        }
    }
    
    for(auto x:upper) v.push_back(x);
    for(auto x:lower) v.push_back(x);
    sort(all(v));
    for(auto x:v) cout << x.second;
    cout << endl;

}

    return 0;
}