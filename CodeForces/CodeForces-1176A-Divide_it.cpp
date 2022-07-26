#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int q,count=0;
    long long int n;
    cin >> q;          //testcases
    for(int i=0;i<q;i++){
        cin >> n;      //number
        while(n>1){
        if(n%2==0){n/=2;count++;}
        else if(n%3==0){n=2*n/3;count++;}
        else if (n%5==0){n=4*n/5;count++;}
        else break;
        }
        if(n==1) cout << count << endl;
        else cout << -1 << endl;
        count=0; 
    }
    return 0;
}