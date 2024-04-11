#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
vector<string>v(100);
v[3]="aaa";

for(int i=4;i<=78;i++){
    v[i]=v[i-1];
    if(i<=28) v[i][2]++;
    else if(i<=53) v[i][1]++;
    else v[i][0]++;
}

testcase{
    int n; cin >> n;
    cout << v[n] << endl;
}

    return 0;
}