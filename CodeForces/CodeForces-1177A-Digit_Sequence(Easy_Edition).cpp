#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int k; cin >> k;
    string s;
    for(int i=0;i<=10000;i++) s+=to_string(i);
    cout << s[k] << endl;
    return 0;
}