//wrong answer on test 3
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
    int n,m; cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++) cin >> arr[i];
    sort(arr, arr+m);

    vector<pair<int,int>>v;
    for(int i=0;i<m-1;i++){
        int diff = arr[i+1]-arr[i];
        auto it = find_if(v.begin(), v.end(), [diff](const auto& pair){ return pair.first == diff; });
        if(it!=v.end()){
            it->second++;
        }
        else v.push_back({diff,1});
    }
    sort(all(v));

    int cnt=0, res=0;
    for(auto x:v){
        res+=(x.first);
        cnt+=(x.second);
        if(cnt>=n)break;
    }
    cout << res << endl;
    return 0;
}