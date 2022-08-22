#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, d, x; cin >> n >> d >> x;
    int arr[n]; int cnt=0;

    for(int i=1;i<=n;i++){  // for every participants
        cin >> arr[i];
        cnt++; //first day
        for(int j=1;j*arr[i]+1<=d;j++){
            cnt++; // nAi+1 th day
        }
    }
    cout << cnt + x << endl;
    return 0;   
}