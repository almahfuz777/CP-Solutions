#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main() {
fast;
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, d = 0;
    for(char c : s){
        if(c=='A') a++;
        else d++;
    }
    if(a>d) cout << "Anton" << endl;
    else if(a<d) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}