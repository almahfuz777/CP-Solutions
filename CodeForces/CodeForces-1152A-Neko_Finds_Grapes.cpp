#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m; cin >> n >> m;
    int box[n], key[m];
    int b_odd=0,b_even=0,k_odd=0,k_even=0;
    for(int i=0;i<n;i++){
       cin >> box[i];
       if(box[i]%2==0) b_even++;
       else b_odd++;
    }
    for(int i=0;i<m;i++){
        cin >> key[i];
        if(key[i]%2==0) k_even++;
        else k_odd++;
    }
    int cnt=0;
    cout << min(b_even,k_odd) + min(k_even,b_odd) << endl;
    return 0;
}