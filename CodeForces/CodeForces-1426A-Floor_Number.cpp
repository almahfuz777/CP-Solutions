#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        int n,x; cin >> n >> x;
        int room=2,floor=1;
        while(room<n){
            room+=x;
            floor++;
        }
        cout << floor << endl;
    }
    return 0;
}