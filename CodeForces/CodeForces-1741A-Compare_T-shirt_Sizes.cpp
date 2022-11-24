#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        string a,b; cin >> a >> b;
        if(a==b) cout << "=" << endl;
        else{
            int l1 = a.size();
            int l2 = b.size();
            
            if(a[l1-1] > b[l2-1]) cout << "<" << endl;  // L<M<S
            else if(a[l1-1] < b[l2-1]) cout << ">" << endl; 

            else if(a[l1-1] = b[l2-1]){ // same last character
                if(l1>l2){
                    if(a[l1-1] == 'L') cout << ">" << endl;
                    else if(a[l1-1] == 'S') cout << "<" << endl;
                }
                else{
                    if(a[l1-1] == 'L') cout << "<" << endl;
                    else if(a[l1-1] == 'S') cout << ">" << endl;
                }
            }
        }
    }
    return 0;
}
// L > M > S X
// S < M < L
// XXS XXXS