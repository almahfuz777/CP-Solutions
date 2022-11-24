#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<string> v;
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(find(v.begin(), v.end(),s)!=v.end()) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
            v.push_back(s);
        }
    }
    return 0;
}