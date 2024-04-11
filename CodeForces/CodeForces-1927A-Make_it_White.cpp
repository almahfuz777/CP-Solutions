#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    string s; cin >> s;

    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            first=i; 
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            last=i; 
            break;
        }
    }
    int count = 0;
    if (first != -1 && last != -1) {
        count = last - first+1;
    }
    cout << count << endl; 
}


    return 0;
}