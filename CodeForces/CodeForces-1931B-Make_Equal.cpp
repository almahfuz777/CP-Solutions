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
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    ll avg = sum/n;
    
    ll x = ((arr[0]>=avg)? (arr[0]-avg) : -1); 
    int flag =1;
    for(int i=1;i<n;i++){
        if(x<0){
            flag=0; break;
        }
        ll diff = arr[i]-avg;
        x+=diff;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}

    return 0;
}