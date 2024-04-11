#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int arr[n+1]={0};
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        arr[i]=arr[i-1]+x;
    }
    int sum = arr[n]; 
    int res = 1;
    for(int i=k;i<=n;i++){
        int x = arr[i]-arr[i-k];
        if(x<sum){
            sum = x;
            res = i-k+1;
        }
    }
    cout << res << endl;

    return 0;
}