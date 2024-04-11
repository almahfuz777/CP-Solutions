#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

ll arr[100001];
ll pf[100001];  // prefix sum

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        arr[x] += 1;
    }
    
    for(int i=1;i<=100000;i++){
        pf[i]=pf[i-1]+arr[i];
    }

    int q; cin >> q;
    while(q--){
        ll x; cin >> x;
        if(x>100000) cout << n << endl;
        else cout << pf[x] << endl;
    }
}

// using upper_bound function
/*
int main() {
fast;
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    
    int q; cin >> q;
    while(q--){
        ll x; cin >> x;
        int cnt = upper_bound(arr,arr+n,x)-arr;
        cout << cnt << endl;
    }
    return 0;
}
*/