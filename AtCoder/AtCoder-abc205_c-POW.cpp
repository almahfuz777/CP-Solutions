#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long a,b,c;
    cin >> a >> b >> c;
    if(c%2==0){
        a=abs(a);
        b=abs(b);
    }
    if(a>b) cout << ">" << endl;
    else if(a<b) cout << "<" << endl;
    else cout << "=" << endl;
    return 0;
}