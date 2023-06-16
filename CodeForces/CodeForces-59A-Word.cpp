#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main() {
fast;

    string s; cin >> s;

    int upper = 0, lower = 0;
    
    for(char c : s){
        if(isupper(c)) upper++;
        else if(islower(c)) lower++;
    }
    
    if(upper>lower){
        for(char &c : s) c = toupper(c);
    }
    else{
        for(char &c : s) c = tolower(c);
    }

    cout << s << endl;
    return 0;
}