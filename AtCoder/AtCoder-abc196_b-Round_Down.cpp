#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string num;
    cin >> num;
    for(int i=0;num[i]!='\0';i++) {
        if(num[i]=='.') break;
        else cout << num[i];
    }
    return 0;
}