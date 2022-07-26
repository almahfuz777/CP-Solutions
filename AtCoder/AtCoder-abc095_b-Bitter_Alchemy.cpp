#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, x, cnt=0;
    cin >> n >> x;
    int m[n],total=0;
    for(int i=0;i<n;i++) cin >> m[i];

    sort(m,m+n);
    for(int i=0;i<n;i++) if(x>=m[i]){
        x-=m[i]; cnt++;
    }
    while(x>=m[0]){
        x-=m[0];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

