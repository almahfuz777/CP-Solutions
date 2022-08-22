#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1,v2;
    int n,x; cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2!=0) v1.push_back(x);
        else v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int s1= v1.size(); int s2=v2.size();
    for(int i=0;i<s1;i++) cout << v1[i] << " ";
    for(int i=s2-1;i>=0;i--) cout << v2[i] << " ";
    return 0;
}
