#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

char check(const string& str) {
   char missingChar = '\0';

    for (char ch = 'A'; ch <= 'C'; ++ch) {
        if (str.find(ch) == string::npos && str.find('?') != string::npos) {
            missingChar = ch;
            break;
        }
    }

    return missingChar;
}

int main() {
fast;
testcase{
    string s[3];
    for(int i=0;i<3;i++) cin >> s[i];
    for(int i=0;i<3;i++){
        char c = check(s[i]);
        if(c!='\0'){
            cout << c << endl;
            break;
        }
    }

    
}

    return 0;
}