#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main() {
fast;
    string s; cin >>s;
    int cnt = 1;
    for (int i = 0; i < s.size()-1; i++) {
        if(s[i]==s[i+1]){
            cnt++;
            if(cnt>=7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else cnt = 1; 
    }
    if(cnt>=7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}