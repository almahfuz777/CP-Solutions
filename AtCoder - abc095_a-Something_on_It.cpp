#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i, count=0;
    char s[3]; cin >> s;

    for(i=0;i<3;i++){
        if(s[i]=='o')count++;
    }
    cout << 700+count*100 << endl;
    return 0;
}