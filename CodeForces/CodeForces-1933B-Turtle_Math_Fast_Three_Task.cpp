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
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    
    int res1 = (sum/3+1)*3 - sum;

    int rem = sum%3;
    int cnt=0;
    if(rem==1){
        for(int num : arr) {
            if (num % 3 == 1) {
                cnt = 1;
                break;
            }
        }
        if (cnt == 0) {
            cnt = 2;
        }
    }
    else if(rem==2){
        for(int num : arr) {
            if (num % 3 == 2) {
                cnt = 1;
                break;
            }
        }
        if (cnt == 0) {
            cnt = 2;
        }
    }
    

    cout << ((res1<cnt)?res1:cnt) << endl;

}

    return 0;
}