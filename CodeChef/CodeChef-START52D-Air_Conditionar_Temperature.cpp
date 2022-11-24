#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        int min= (a>c)? a:c;
        if(min<=b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}
