#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n; int arr[n];
    int max = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>arr[max]) max = i;
    }
    cout << max+1 << endl;
    return 0;
}