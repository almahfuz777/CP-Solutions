#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    ll n,//message
    f,  //  initial charge
    a,  // per unit time charge
    b;  //turnonoff
    cin >> n >> f >> a >> b;

    ll arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int pos=0;
    for(int i=0;i<n;i++){
        int dis = arr[i]-pos;
        if(dis*a < b){
            f-=dis*a;
        }
        else f-=b;
        pos = arr[i];
    }
    if(f>0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

    return 0;
}