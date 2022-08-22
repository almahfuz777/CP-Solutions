#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int train = (a<b)? a:b;
    int bus = (c<d)? c:d;
    cout << train + bus << endl;
    return 0;
}