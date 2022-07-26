#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,t,count=0;
    cin >> n >> k;
    while(n--){
        cin >> t;
        if(t%k==0)count++;
    }
    cout << count << endl;
    return 0;
}