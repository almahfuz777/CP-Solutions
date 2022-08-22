#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    
    int t; cin >> t;
    while(t--)
    {
        int n,h,m; cin >> n >> h >> m; // went to bed
        int sleep=h*60+m;

        int alarm[n];   //alarm trigger
        for(int i=0;i<n;i++){
            int hr,min; cin >> hr >> min;
            alarm[i]=hr*60+min;
        }
        for(int i=0;i<n;i++){
            int time= alarm[i]-sleep;
            if(time>=0) alarm[i]=time;
            else{
                alarm[i]= 1440-sleep+alarm[i];
            }
        }
        sort(alarm,alarm+n);
        cout << alarm[0]/60 <<" "<< alarm[0]%60 << endl;
        
    }
    return 0;
}
/*
    23 35 = 1415 

    20 15 = 1215
    10 30 =  630

    200
    785
*/