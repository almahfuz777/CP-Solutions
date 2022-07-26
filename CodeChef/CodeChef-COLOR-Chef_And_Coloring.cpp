#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;          // testcases
    while(t--)
    {
        int n; cin>>n;      // number of rooms
        string s; cin>>s;   // color configuration

        int R=0,G=0,B=0;

        for(int i=0;i<n;i++){
            if(s[i]=='R') R++;
            else if(s[i]=='G') G++;
            else if(s[i]== 'B') B++;
        }

        int Max = max(max(R,B) , G);    // finding out the max
        cout<<(n - Max)<<endl;          // diff from the max is the result
    }
}