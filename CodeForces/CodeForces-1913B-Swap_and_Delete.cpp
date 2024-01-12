#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    string s; cin >> s;
    int pos=0,neg=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') pos++;
        else neg++;
    }
    int cnt=0;
    int i=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(neg){
                neg--;
                cnt++;
            }
            else break;
        }
        else{
            if(pos){
                pos--;
                cnt++;
            }
            else break;
        }
    }
    cout << s.size()-i << endl;
}

    return 0;
}