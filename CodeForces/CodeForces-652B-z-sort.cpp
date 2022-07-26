#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0,j=n-1; i<n/2; i++,j--)
        cout << v[i] << " " << v[j] << " ";
    if(n&1) cout << v[n/2] << endl; //for the left out value in case of odd
    return 0;
}
//5
//1 3 2 2 5
//1 2 2 3 5
//1 5 2 3 2