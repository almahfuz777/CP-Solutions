#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n,k; cin >> n >> k;
    ll b[n];
    ll product=1;
    for(int i=0;i<n;i++){
        cin >> b[i];
        product*=b[i];
    }
    if(2023%product!=0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << 2023/product << " ";
        for(int i=0;i<k-1;i++) cout << 1 <<" ";
        cout << endl;
    } 
}

    return 0;
}