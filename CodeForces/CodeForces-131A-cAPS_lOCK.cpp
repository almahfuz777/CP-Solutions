#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int flag=0, cnt=0;

    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            cnt++;
        }
    }
    
    if(cnt==s.size()) flag=1;
    else if(cnt==s.size()-1 && islower(s[0])) flag=1;

    if(flag==1){
        for(int i=0;i<s.size();i++){
            if(islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}