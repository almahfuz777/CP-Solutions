#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0, max=0;
    int n; cin >> n;
    while(n--){
        int a,b; cin >> a >> b;
        sum-=a; sum+=b;
        if(sum>max) max = sum;
    }
    cout << max << endl;
    return 0;
}