#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long

bool isVowel(char ch){
    if((ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') || (ch == 'y')){
        return true;
    }
    return false;
}
int main() {
fast;
    string s; cin >> s;
    for(int i=0;i<s.size();i++){
        char c = tolower(s[i]);
        if(!isVowel(c)){
            cout << "." << c;
        }
    }
    return 0;
}