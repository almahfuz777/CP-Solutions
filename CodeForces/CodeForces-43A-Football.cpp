#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    map<string,int>mp;
    testcase{
        string s; cin >> s;
        mp[s]++;
    }
    string winner;
    int goal=-1;
    for (auto it : mp){
        if(it.second>goal){
            winner = it.first;
            goal = it.second;
        }
    }
    cout << winner << endl;

    return 0;
}