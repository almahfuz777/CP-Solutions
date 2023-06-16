#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define pi = 3.1415926535897932384626
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;  
    int n,m,x; cin >> n >> m >> x;
    int arr[m];
    int left=0, right=0;
    for(int i=0;i<m;i++){
        cin >> arr[m];
        if(arr[m]>x) right++;
        else if(arr[m]<x) left++;
    }
    int cost =(right<left)? right:left;
    cout << cost << endl;
    return 0;
}