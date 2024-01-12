#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n; cin >> n;
    ll arr[n];
    int neg=0, zero=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==0)zero++;
        else if(arr[i]<0)neg++;
    }
    if(zero||neg%2!=0) cout << 0 << endl;
    else{
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
    }
    
    
}  

    return 0;
}