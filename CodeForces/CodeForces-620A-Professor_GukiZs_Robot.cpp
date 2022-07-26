#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1; cin >> x2 >> y2;
    int x=abs(x2-x1);
    int y=abs(y2-y1);
    int ans=(x<=y)? x:y;
    ans+=abs(x-y);
    cout << ans << endl;
    return 0;
}