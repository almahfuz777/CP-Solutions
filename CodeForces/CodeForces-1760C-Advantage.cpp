#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int max = -1;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]>max) max=arr[i];
        }
 
        int sorted_arr[n];
        copy(arr,arr+n,sorted_arr);
        sort(sorted_arr,sorted_arr+n);
 
        for(int i=0;i<n;i++){
            if(arr[i]!=max){
                cout << arr[i]-max << " ";
            }
            else{
                cout << arr[i]-sorted_arr[n-2] << " ";
            } 
        }cout << endl;
    }
    return 0;
}