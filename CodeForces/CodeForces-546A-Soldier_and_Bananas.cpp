#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int k,w; ll n;
    cin >> k >> n >> w;
    int m=0;
    for(int i=1;i<=w;i++){
        m+=(k*i);
    }
    if(m>n) cout << m-n << endl;
    else cout << 0 << endl;
    return 0;
}