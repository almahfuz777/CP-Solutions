#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]) cnt++;
    }
    cout << cnt;
    return 0;
}