#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n], sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int min=0, cnt=0;
    for(int i=n-1;i>=0;i--){
        if(min<=sum/2){
            min+=arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}