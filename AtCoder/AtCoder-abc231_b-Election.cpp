#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        mp[s]++;
    }
    int max = -1; string result="";
    map<string, int> ::iterator it;
    for(it = mp.begin(); it != mp.end(); ++it){
        if(it->second > max){
            max = it->second;
            result = it->first;
        }
    }
    cout << result << endl;
    return 0;
}
