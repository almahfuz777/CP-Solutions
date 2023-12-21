#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int res = (((n*567)/9+7492)*235)/47-498;
        cout << abs((res/10)%10) << endl;
    }

    return 0;
}