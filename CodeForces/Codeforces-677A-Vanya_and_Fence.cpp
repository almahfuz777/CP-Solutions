#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h; cin >> n >> h;
    int arr[n], cnt = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>h) cnt++;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}