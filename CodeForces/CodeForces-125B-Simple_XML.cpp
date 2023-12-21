#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int space = 0;
    
    for(int i=0;i<s.size();i++){
       if(s[i]=='<' && s[i+1]!='/'){
            for(int j=0;j<space;j++) cout << " ";
            string x = s.substr(i,3);
            cout << x << endl;
            space+=2;
        }
        if(s[i]=='<' && s[i+1]=='/'){
            space-=2;
            for(int j=0;j<space;j++) cout << " ";
            string x = s.substr(i,4);
            cout << x << endl;
        }
    }

    return 0;
}