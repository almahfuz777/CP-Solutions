#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    int add=0, del=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='1' && s2[i]=='0')del++;
        if(s1[i]=='0' && s2[i]=='1')add++;
    }
    if(del && add){
        cout << abs(add - del) + min(add, del) << endl;
    }
    else{
        cout << max(add,del) << endl;
    }
}   

    return 0;
}