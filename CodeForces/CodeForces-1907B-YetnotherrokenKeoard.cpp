#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    string s,str=""; cin >> s;
    for(char c:s){
        if(c!='B' && c!='b') str+=c;
        else if(c=='b' && !str.empty()){
            for(int i=str.size()-1;i>=0;i--){
                if (islower(str[i])) {
                    str.erase(i,1);
                    break;
                }
                
            }
        }
        else if(c=='B' && !str.empty()){
            for(int i=str.size()-1;i>=0;i--){
                if (isupper(str[i])) {
                    str.erase(i,1);
                    break;
                }
                
            }
        }
    }
        cout << str << endl;
}
    return 0;
}