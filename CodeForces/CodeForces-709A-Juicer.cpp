#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int n,b,d; cin >> n >> b >> d;
    int sum=0, cnt=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x<=b){
            sum+=x;
            if(sum>d){
                cnt++;
                sum=0;
            }
        }
        
    }
    cout << cnt << endl;

    return 0;
}