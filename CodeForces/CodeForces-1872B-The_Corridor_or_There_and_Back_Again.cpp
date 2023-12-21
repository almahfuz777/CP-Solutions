#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    int n; cin >> n; int arr[n];
    for(int i=0;i<n;i++){
        int d,s; cin >> d >> s;
        arr[i] = (d-1)+ ceil(s/2.0);
    }
    sort(arr,arr+n);
    cout << arr[0] << endl;     
}   
    return 0;
}