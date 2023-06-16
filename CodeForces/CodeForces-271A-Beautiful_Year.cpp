#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n++){
        string s = to_string(n);
        sort(s.begin(),s.end());
        int flag=0;
        for (int i = 0; i < s.size()-1; i++){
            if(s[i]==s[i+1]){
                flag=1; 
                break;   
            }
        }
        if(flag==0){
            cout << n << endl;
            break;
        }
    }
    return 0;
}