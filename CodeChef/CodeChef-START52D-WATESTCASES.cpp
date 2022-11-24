#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
        vector<int> vv;

	    int n; cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin >> arr[i];
	    string v; cin >> v;
	    for(int i=0;i<n;i++){
	        if(v[i]=='0') vv.push_back(arr[i]);
	    }
	    sort(vv.begin(),vv.end());
	    cout << vv[0] << endl;
	}
	return 0;
}