#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n,a,b; cin >> n >> a >> b;
	    int total_round = log(n) / log(2);
	    int round_time = total_round * a;
	    int break_time = (total_round-1) * b;
	    cout << round_time + break_time << endl;
	}
	return 0;
}