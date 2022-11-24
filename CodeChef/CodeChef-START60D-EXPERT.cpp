#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int x,y; cin >> x >> y;
	    if((y*100.0/x)>=50) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
