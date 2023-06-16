#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int i=0;
    while(s[i]){
        if(s[i]=='.') break;
        cout << s[i]; i++;
    }
    return 0;
}