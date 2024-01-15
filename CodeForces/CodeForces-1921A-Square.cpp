#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    vector<pair<int,int>>v1;
    vector<pair<int,int>>v2;
    for(int i=0;i<4;i++){
        int x,y; cin >> x >> y;
        v1.push_back({x,y});
        v2.push_back({y,x});
    }         
    sort(all(v1));
    sort(all(v2));

    int side1 = abs(v1[0].second - v1[1].second);
    int side2 = abs(v2[0].second - v2[1].second);
    
    int area = side1*side2;
    cout << area << endl;
}

    return 0;
}