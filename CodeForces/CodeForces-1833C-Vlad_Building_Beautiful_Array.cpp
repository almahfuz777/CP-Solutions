#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define FORn for(int i=0;i<n;i++)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    testcase{
        int n; cin >> n;
        int arr[n]; 
        int even = 0, odd = 0;
        FORn{
            cin >> arr[i];
            if(arr[i]>0){
                (arr[i]%2==0)? even++ : odd++;
            }
        }
        if(even==n || odd==n) cout << "YES" << endl;
        else{
            sort(arr,arr+n);
            if(arr[0]%2!=0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}