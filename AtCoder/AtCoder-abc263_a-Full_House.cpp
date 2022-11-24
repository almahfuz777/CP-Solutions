#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a[5];
    for(int i=0;i<5;i++) cin >> a[i];
    sort(a,a+5);
    
    int cnt1=0, cnt2=0;
    for(int i=0;i<5;i++){
        if(a[i]==a[0]) cnt1++;
        if(a[i]==a[4]) cnt2++;
    }
    if(cnt1==3 && cnt2==2) cout << "Yes" << endl;
    else if(cnt1==2 && cnt2==3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}