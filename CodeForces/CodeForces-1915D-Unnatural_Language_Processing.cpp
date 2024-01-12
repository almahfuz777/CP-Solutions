#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e';
}

bool isConsonant(char ch) {
    return ch == 'b' || ch == 'c' || ch == 'd';
}

int main() {
fast;
testcase{
    int n; cin >> n;
    string s; cin >> s;
    int i=0;
    string res="";

    while(i<n){
        if(i+2==n){
            res+=s[i];
            res+=s[i+1];
            break;
        }
        else if(i+3==n){
            res+=s[i];
            res+=s[i+1];
            res+=s[i+2];
            break;
        }     

        else if(isConsonant(s[i+3])){
            res+=s[i];
            res+=s[i+1];
            res+=s[i+2];
            res+=".";
            i+=3;
        }
        else{
            res+=s[i];
            res+=s[i+1];
            res+=".";
            i+=2;
        }

    }

    cout << res << endl;

}  

    return 0;
}