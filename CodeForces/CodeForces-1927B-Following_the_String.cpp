#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    int n; cin >> n;
    int arr[n];
    
    map<char,int>mp;
    char c='a';
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout << c;
            mp[c]=1;
            c+=1;
        }
        else{
            for(auto x:mp){
                if(x.second==arr[i]){
                    cout << x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
    }
    cout << endl;
    

}    

    return 0;
}