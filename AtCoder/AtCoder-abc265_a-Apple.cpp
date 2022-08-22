#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, y, n; cin >> x >> y >> n;
    if(y<3*x) cout << (n/3) * y + (n%3) * x << endl;
    else cout << n * x << endl;
    return 0;
}