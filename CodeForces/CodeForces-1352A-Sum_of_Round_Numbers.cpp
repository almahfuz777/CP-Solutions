#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n; cin >> n;
    list<ll>l;
    int i=0;
    while(n!=0){
        ll x = n%10;   //last digit
        if(x!=0) l.push_back(x * pow(10,i));
        n/=10;
        i++;
    }
    cout << l.size() << endl;
    for(auto item : l){
        cout << item << " ";
    } cout << endl;
}

    return 0;
}