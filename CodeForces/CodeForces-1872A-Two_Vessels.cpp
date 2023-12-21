#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
testcase{
    double a,b,c;
    cin >> a >> b >> c;
    double less = abs(a-b);
    cout << ceil(less/c/2) << endl; 
}
    return 0;
}