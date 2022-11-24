#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while(t--){
        string s[8];
        for(int i=0;i<8;i++){
            cin >> s[i];
        }
        int R_cnt = 0, B_cnt = 0;
        // row check
        for(int str=0;str<8;str++){
            for(int i=0;i<8;i++){
                if(s[str][i]=='R') R_cnt++;
            }
            if(R_cnt==8) {
                cout << "R" << endl;
                break;
            }
            else R_cnt = 0;
        }
        // column check
        for(int str=0;str<8;str++){
            for(int i=0;i<8;i++){
                if(s[i][str]=='B') B_cnt++;
            }
            if(B_cnt==8){
                cout << "B" << endl;
                break;
            }
            else B_cnt = 0;
        }

    }
    return 0;
}