#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,str=""; cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(str[str.size()-1]!=' ')str+=" ";
            i+=2;
        }
        else str+=s[i];
    }
    cout << str << endl;
    return 0;
}