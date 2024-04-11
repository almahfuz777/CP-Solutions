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
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<0)arr[i]=-arr[i];
        sum+=arr[i];
    }
    cout << sum << endl;
}

    return 0;
}