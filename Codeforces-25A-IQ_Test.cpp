#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,even=0,odd=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0)even++;
        else odd++;
    }
    if (even==1){
        for(int i=0;i<n;i++) if(arr[i]%2==0) {
            cout << i+1 << endl;
            break;
        }
    }
    else if (odd==1){
        for(int i=0;i<n;i++) if(arr[i]%2!=0) {
            cout << i+1 << endl;
            break;
        }  
    }
    return 0;
}