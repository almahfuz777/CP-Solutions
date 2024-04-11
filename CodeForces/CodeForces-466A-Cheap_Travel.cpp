#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a,b; cin >> n >> m >> a >> b;
    int cost = 0;
    if(b/m>=a){ //oneway
        cost =  n*a;
    }
    else{
        cost=(n/m)*b;   // package
        cost+=min(b, (n%m)*a);  // leftover
    }
    cout << cost << endl;

    return 0;
}