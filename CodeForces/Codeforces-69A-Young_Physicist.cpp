#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t,x,y,z,sum1=0,sum2=0,sum3=0;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0 && sum2==0 && sum3==0)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
