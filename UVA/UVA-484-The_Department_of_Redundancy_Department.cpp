#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v;
    map<int, int> m;
    int n;
    while(cin >> n){
        if(m[n]==0) v.push_back(n);
        m[n]++;
    }
    int size=v.size();
    for(int i=0; i<size; i++){
        cout << v[i] << " " << m[v[i]] << endl;
    }
    return 0;
}