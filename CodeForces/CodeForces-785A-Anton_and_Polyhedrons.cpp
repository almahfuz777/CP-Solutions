#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

int main() {
fast;
    int cnt = 0;
    testcase {
        string s;
        cin >> s;
        if(s == "Tetrahedron") cnt += 4;
        else if(s == "Cube") cnt += 6;
        else if(s == "Octahedron") cnt += 8;
        else if(s == "Dodecahedron") cnt += 12;
        else if(s == "Icosahedron") cnt += 20;
    }
    cout << cnt << endl;

    return 0;
}