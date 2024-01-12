#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int unique(int a,int b, int c){
    if (a == b) {
        return c;
    } else if (a == c) {
        return b;
    } else {
        return a;
    }
}

int main() {
fast;
testcase{
int a,b,c; cin >> a >> b >> c;
cout << unique(a,b,c) << endl;
}
    return 0;
}