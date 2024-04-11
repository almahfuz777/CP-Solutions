#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    ll n,l; cin >> n >> l;
    ll arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    ll max=-1.0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]>max) max = arr[i+1]-arr[i];
    }
    double d = (max)/2.0;
    if(arr[0]>d)d = arr[0];
    if(l-arr[n-1]>d) d = l-arr[n-1];
    cout << fixed << setprecision(10);
    cout << d << endl;

    return 0;
}