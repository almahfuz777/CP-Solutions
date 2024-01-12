#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int res=0; int cnt=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]) cnt++;
        else{
            if(cnt>res) res=cnt;
            cnt=1;
        }
    }
    cout << ((res>cnt)? res:cnt) << endl;
    return 0;
}