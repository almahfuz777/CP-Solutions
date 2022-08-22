#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int y; cin >> y;
    int rem=y%4;
    if(rem==2) cout << y << endl;
    else if(rem>2) cout << y+y%4 << endl;
    else cout << y+2-rem << endl;
    return 0;
}