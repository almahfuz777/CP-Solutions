#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    char room[10]={'0','0','0','0','0','0','0','0','0','0'};
    char arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>='0' && arr[i]<='9') room[arr[i]-'0']='0';
        else if(arr[i]=='L'){
            for(int j=0;j<10;j++) if(room[j]=='0'){
                room[j]='1';
                break;
            }
        }
        else if(arr[i]=='R'){
            for(int j=9;j>=0;j--) if(room[j]=='0'){
                room[j]='1';
                break;
            }
        }
    }
    for(int i=0;i<10;i++) cout << room[i];
    return 0;
}