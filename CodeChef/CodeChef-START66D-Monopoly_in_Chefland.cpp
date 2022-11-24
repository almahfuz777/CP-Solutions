#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int arr[3];
	    for(int i=0;i<3;i++) cin >> arr[i];
	    sort(arr,arr+3);
	    if(arr[2]>arr[0]+arr[1]) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
	return 0;
}
