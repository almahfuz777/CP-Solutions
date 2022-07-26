#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t,count=1;
    cin >> t;
    while(t--)
    {
        int a ,b,res=0;
        cin >> a >> b;
        for(int i=a;i<=b;i+=2){
            if(i%2==0)i++;
            res+=i;
            
        }
        cout << "Case " << count << ": " << res <<endl;
        count++;
    }
    return 0;
}