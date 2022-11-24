#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n, x, y; cin >> n >> x >> y;
	    int flag = 0;
	    if(y%x==0){
	        if(y/x<=n)  flag=1;
	    }
	    if(flag==1) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
