#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int,int>mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    int cnt=0;
    cnt+=mp[4];

    cnt+=mp[3];
    if(mp[1]>mp[3]) mp[1]-=mp[3];
    else mp[1]=0;

    cnt+=(mp[2]/2);
    if(mp[2]%2==0) mp[2]=0;
    else{
        cnt++; 
        if(mp[1]>2) mp[1]-=2;
        else mp[1]=0;
    }

    cnt+=(mp[1]/4);
    if(mp[1]%4!=0){
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}