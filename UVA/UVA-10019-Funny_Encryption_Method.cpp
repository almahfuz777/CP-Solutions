#include <iostream>
using namespace std;

int onebit(int n){
    int count = 0;
    while (n){
        count += n & 1;
        n >>= 1;
    } 
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dec = onebit(n);
        int hex = 0;
        
        while (n){
            hex += onebit(n % 10);
            n /= 10;
        }
        cout << dec << ' ' << hex << '\n';
    }
}