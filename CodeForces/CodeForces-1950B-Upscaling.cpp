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

    string s1,s2; int k=n;
    while(k>0){
        s1+="##";
        s2+="..";

        k-=1;
        if(k<=0) break;

        s1+="..";
        s2+="##";
        k-=1;
    }
    while(n>0){
        cout << s1 << endl;
        cout << s1 << endl;

        n-=1;
        if(n<=0) break;

        cout << s2 << endl;
        cout << s2 << endl;
        n-=1;
    }
}

    return 0;
}